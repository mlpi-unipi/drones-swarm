function semaphoreCell = setfilesemaphore(fileList, semaphoreMode)
%SETFILESEMAPHORE  Set semaphore for exclusive file access.
%   SEMAPHORE = SETFILESEMAPHORE(FILENAME) sets a semaphore to get
%   exclusive access on file FILENAME. The semaphore is realized by generating
%   a simple Matlab data file after checking that no other semaphores are
%   existing. The function exits if the semaphore is set. Exclusive file
%   access is of course only guaranteed if all other Matlab processes use
%   semaphores to access the same file.
%
%   The output variable SEMAPHORE is needed to correctly remove the file
%   semaphore after file access. It is an error to call function
%   SETFILESEMAPHORE without output arguments.
%
%   SEMAPHORE = SETFILESEMAPHORE(FILELIST) sets semaphores for all files
%   given in cell array FILELIST. Note that function SETFILESEMAPHORE waits
%   for exclusive file access on ALL files in the list before returning.
%
%   SEMAPHORE = SETFILESEMAPHORE(FILENAME, 'set if existing') sets a
%   semaphore only if the file FILENAME is existing. Caution: No exclusive
%   file access is guaranteed if the file is not existing! The calling 
%   function needs to make sure not to access file FILENAME!
%
%   SEMAPHORE = SETFILESEMAPHORE(FILENAME, 'set if not existing') sets a
%   semaphore only if the file FILENAME is not existing. Caution: No exclusive
%   file access is guaranteed if the file is existing! The calling function 
%   needs to make sure not to access file FILENAME!
%
%   SEMAPHORE = SETFILESEMAPHORE(FILENAME, 'set always') will set a semaphore
%   file regardless of the existence of file FILENAME (default behaviour).
%
%   Note: In order to avoid blocking of other processes, a semaphore file older
%   than 20 seconds is considered invalid and will be ignored. Thus the user
%   should make sure that the file access time is minimized, i.e. the time 
%   between setting and removing the file semaphore.
%
%   Example:
%   sem = setfilesemaphore('test.mat');
%   % access file test.mat here
%   dir test.mat.semaphore.*
%   removefilesemaphore(sem);
%
%   Markus Buehren
%   Last modified 20.07.2014
%
%   See also REMOVEFILESEMAPHORE.

% Todo: What about system time differences between the local machine and
% the machine where the temporary directory lies?

% set parameters (all times in seconds)
semaphoreOldTime    = 20;   % other semaphore files are deleted if found longer than this time
semaphoreOldTime2   = 60;   % other semaphore files are deleted if older than this time
fixedWaitTime       = 0.02; % wait after generating semaphore to check if access is exclusive
checkAgainWaitTime  = 0.02; % wait before checking again if semaphore files are already existing
retryWaitTime       = 0.4;  % random wait time after removing own semaphore file again 
waitInfoTime        = 10;
removeOldSemaphores = 0;    % try to remove old semaphore files or not

% debug options
showWarnings = 0;
debugMode    = 0;

if nargout ~= 1
  error('Function %s must be called with one output argument!', mfilename);
end

if ~exist('semaphoreMode', 'var')
  semaphoreMode = 'set always';
end

setSemaphoreForNotExistingFilesOnly = false;
setSemaphoreForExistingFilesOnly    = false;

if ~ischar(semaphoreMode)
  error('Error: Mode must be a string.\n');
elseif  strcmpi(semaphoreMode, 'set if existing')
  setSemaphoreForExistingFilesOnly    = true;
elseif  strcmpi(semaphoreMode, 'set if not existing')
  setSemaphoreForNotExistingFilesOnly = true;
elseif ~strcmpi(semaphoreMode, 'set always')
  error('Error: Semaphore mode ''%s'' not supported.\n', semaphoreMode);
end

if ischar(fileList)
  % single file given
  fileList = {fileList};
end

nOfFiles      = length(fileList);
semaphoreCell = cell(nOfFiles, 1);
hostname      = gethostname;

oldSemaphoreFilesToIgnore = {};

for fileNr = 1:nOfFiles
  
  % get current file name
  fileName = fileList{fileNr};
  
  % check if given file is itself a semaphore file
  if ~isempty(regexp(fileName, '\.semaphore\.\w+\.\d+\.mat$', 'once'))
    %disp('Warning: Trying to generate a semaphore file for a semaphore file!! Will be ignored.');
    semaphoreCell{fileNr, 1} = '';
    continue
  end
  
  % generate semaphore file pattern of current file
  semaphorePattern     = [fileName, '.semaphore.*.mat'];
  semaphorePatternPath = fileparts(semaphorePattern);
  
  % initialize arrays
  semaphoreFiles          = {};
  semaphoreStartWaitTimes = [];
  
  % save current time
  startWaitTime   = mbtime;
  displayWaitInfo = true;
  
  while 1
    
    if setSemaphoreForExistingFilesOnly || setSemaphoreForNotExistingFilesOnly
      
      % check if target file exists
      if existfile(fileName)
        if setSemaphoreForNotExistingFilesOnly
          % semaphores are only needed for non-existing files => exit while loop
          semaphoreCell{fileNr, 1} = '';
          break
        end
      else
        if setSemaphoreForExistingFilesOnly
          % semaphores are only needed for existing files => exit while loop
          semaphoreCell{fileNr, 1} = '';
          break
        end
      end
    end
    
    % get list of (possibly) existing semaphores
    dirStruct = dir(semaphorePattern);
    anySemaphoreExisting = false;
    
    if ~isempty(dirStruct)
      
      %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
      % other semaphore file(s) existing %
      %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
      
      % check if any existing semaphore file has to be respected
      for k = 1:length(dirStruct)
        
        % get file name of current semaphore
        currSemaphoreFileName = concatpath(semaphorePatternPath, dirStruct(k).name);
        
        % check if semaphore file is included in ignore list
        if ismember(currSemaphoreFileName, oldSemaphoreFilesToIgnore)
          
          % semaphore file is included in ignore list
          %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
          
          %fprintf('Ignoring semaphore file %s.\n', currSemaphoreFileName);
          
        else
          
          % get file date
          if isfield(dirStruct, 'datenum')
            fileDatenum = dirStruct(k).datenum;
          elseif ~isempty(dirStruct(k).date)
            % in older Matlab versions, the field datenum seems not to exist
            fileDatenum = datenum2(dirStruct(k).date);
          else
            % it happens that the info in dirStruct is damaged, file is
            % checked again later in that case
            anySemaphoreExisting = true;
            
            if debugMode
              fprintf('Info in dirStruct seems to be damaged.\n');
            end

            continue
          end
          
          % check if semaphore file is very old (by file date) 
          if (mbtime - (fileDatenum * 86400)) > semaphoreOldTime2
            
            % semaphore file is very old (by file date) and will be ignored
            %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
            
            % add file to ignore list
            oldSemaphoreFilesToIgnore{end+1} = currSemaphoreFileName; %#ok

            if 0
              disp(textwrap2(sprintf(['Ignoring old semaphore of file %s ',...
                                  '(maybe not removed correctly).'], fileName)));
            end
            
            if debugMode
              fprintf('Semaphore file %s added to ignore list. (1)\n', currSemaphoreFileName);
            end
            
            if removeOldSemaphores
              % try to remove old semaphore file
              mbdelete(currSemaphoreFileName, showWarnings, 0); %% file access %%
            end
            
          else
            
            % check if semaphore was found before and if it was, if it 
            % is already existing for a long time
            currSemaphoreIndex = find(strcmp(semaphoreFiles, currSemaphoreFileName), 1);
            
            if isempty(currSemaphoreIndex) || ...
                (mbtime - semaphoreStartWaitTimes(currSemaphoreIndex)) < semaphoreOldTime
              
              % current semaphore file must be respected
              %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
              semaphoreFiles         {end+1} = currSemaphoreFileName; %#ok
              semaphoreStartWaitTimes(end+1) = mbtime; %#ok
              
              % semaphore file must be respected
              anySemaphoreExisting = true;
              
              if debugMode
                fprintf('Respecting semaphore file %s.\n', currSemaphoreFileName);
              end
              
            else
              
              % current semaphore is already existing for a long time
              %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
              
              % add file to ignore list
              oldSemaphoreFilesToIgnore{end+1} = currSemaphoreFileName; %#ok
              disp(textwrap2(sprintf('Ignoring old semaphore of file %s (maybe not removed correctly).', ...
                                     fileName)));
              
              if debugMode
                fprintf('Semaphore file %s added to ignore list. (2)\n', currSemaphoreFileName);
              end
              
              if removeOldSemaphores
                % try to remove old semaphore file
                mbdelete(currSemaphoreFileName, showWarnings, 0); %% file access %%
              end
              
            end % if isempty(currSemaphoreIndex) || ...
          end % if (mbtime - (fileDatenum * 86400)) > semaphoreOldTime2
        end % if ismember(currSemaphoreFileName, oldSemaphoreFilesToIgnore)
      end % for k=1:length(dirStruct)
      
      % display info
      if anySemaphoreExisting && displayWaitInfo && ...
          (mbtime - startWaitTime) >= waitInfoTime
        disp(textwrap2(sprintf('Waiting for semaphore(s) of file %s to disappear.', fileName)));
        displayWaitInfo = false;
      end
      
    end % if ~isempty(dirStruct)
    
    if debugMode
      if anySemaphoreExisting
        fprintf('Semaphore file found that must be respected (%s).\n', datestr(now));
      else
        fprintf('No semaphore file found that must be respected (%s).\n', datestr(now));
      end
    end

    if ~anySemaphoreExisting
      
      %%%%%%%%%%%%%%%%%%%%%%%%%%
      % set own semaphore file %
      %%%%%%%%%%%%%%%%%%%%%%%%%%
      
      for attemptNr = 1:10
        % build semaphore file name
        [randomNr, randomStr] = generaterandomnumber; %#ok
        newSemaphoreFileName = [fileName, '.semaphore.', hostname, '.', randomStr, '.mat'];
        
        lasterror('reset');
        try
          
          generateemptyfile(newSemaphoreFileName); %% file access %%
          
          if debugMode
            fprintf('Generated semaphore file %s.\n', newSemaphoreFileName);
          end
          
          break % attemptNr = 1:10
          
        catch
          % in very very very unlikely cases two processes might have
          % generated the same semaphore file name
          if showWarnings
            disp(textwrap2(sprintf('Warning: An error occured while generating semaphore file %s:', ...
                                   newSemaphoreFileName)));
            displayerrorstruct;
          end
          
          % wait random time and try again
          pause(retryWaitTime * randomNr);
        end
      end
      
      % Two semaphore files might have been created at the same time -->
      % wait fixed time, then check if any other semaphore file is
      % existing. This pause time unfortunately causes overhead but seems
      % to be necessary.
      pause(fixedWaitTime);
      
      removeOwnSemaphore = false;
      
      dirStruct = dir(semaphorePattern);
      if length(dirStruct) > 1
        for k = 1:length(dirStruct)
          
          currSemaphoreFileName = concatpath(semaphorePatternPath, dirStruct(k).name);
          
          if debugMode
            fprintf('Semaphore file %s found. %d %d\n', currSemaphoreFileName, ...
                    strcmp(currSemaphoreFileName, newSemaphoreFileName), ...
                    ismember(currSemaphoreFileName, oldSemaphoreFilesToIgnore));
          end
          
          if (~strcmp(currSemaphoreFileName, newSemaphoreFileName)) && ...
              (~ismember(currSemaphoreFileName, oldSemaphoreFilesToIgnore))
            
            if debugMode
              fprintf('Semaphore file needs to be deleted again: %s.\n', newSemaphoreFileName);
            end
            
            % at least one of the existing semaphores may not be ignored
            removeOwnSemaphore = true;
            break % for k = 1:length(dirStruct)
            
          end
        end
      end
      
      if ~removeOwnSemaphore
        
        % exclusive file access is guaranteed
        % save semaphore file name in output cell and leave while loop
        semaphoreCell{fileNr, 1} = newSemaphoreFileName;
        
        if debugMode
          fprintf('Successfully got exclusive file access using semaphore file %s.\n', newSemaphoreFileName);
          fprintf('***********************************************************\n');
        end
        
        % move to next file in input file list
        break % while 1
        
      else
        
        if debugMode
          fprintf('Removing generated semaphore file %s.\n', newSemaphoreFileName);
        end
        
        % remove own semaphore file
        mbdelete(newSemaphoreFileName, showWarnings, 0); %% file access %%
        
        % wait random time before checking everything again in while-loop
        pause(retryWaitTime * rand);
        
      end
    else
      
      % wait before checking again if semaphore files are already existing
      pause(checkAgainWaitTime * rand);

    end % if ~anySemaphoreExisting
  end % while 1
end % for fileNr = 1:nOfFiles


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function [randomNr, randomStr] = generaterandomnumber
%GENERATERANDOMNUMBER
%   In very unlikely cases, it might happen that the random states of rand
%   and randn are equal in two Matlab processes calling function
%   SETFILESEMAPHORE. For this reason, the system and cpu time are used to
%   create different random numbers even in this unlikely case.
%
%   This all would not be necessary if it were possible to get some sort of a
%   Matlab process ID.

nOfDigits = 8; % length of random string will be 4*nOfDigits

randNr    = rand;
randnNr   = mod(randn+0.5, 1);
cputimeNr = mod(cputime, 100)/100;
nowNr     = mod(rem(now,1)*3600*24, 100)/100;

% random number is used for random pause after conflict
randomNr = 0.25 * (randNr + randnNr + cputimeNr + nowNr);

% random string is used for the semaphore file name
if nargout > 1
  ee = 10^nOfDigits;
  randomStr = sprintf(...
    '%0.0f%0.0f%0.0f%0.0f', ...
    ee * randNr,    ...
    ee * randnNr,   ...
    ee * cputimeNr, ...
    ee * nowNr      ...
    );
end
