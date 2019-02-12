function varargout = differentialevolution(varargin)
%DIFFERENTIALEVOLUTION  Start Differential Evolution optimization.
%   [bestmem, bestval, bestFctParams, nrOfIterations] = 
%   DIFFERENTIALEVOLUTION(...) starts a Differential Evolution (DE) optimization
%   to minimize the cost returned by a given function. For a quick start, check
%   out and modify the functions DEMO1, DEMO2 and DEMO3.
%
%   Output arguments:
%   =================
%
%   bestmem:
%   Best population member.
%
%   bestval:
%   Lowest evaluated cost value.
%
%   bestFctParams:
%   Structure like input objFctParams containing the best parameter set.
%
%   nrOfIterations:
%   Number of iterations done.
%
%   resultFileName:
%   Name of file containing optimization results or empty string (if
%   DEParams.saveHistory is set to zero, see below).
%
%
%   Input arguments:
%   ================
%
%   DEParams (required):
%   Struct with parameters as returned by function GETDEFAULTPARAMS.
%
%   paramDefCell (required):
%   Cell specifying the parameters to optimize (see details below).
%
%   objFctHandle (required):
%   Handle to the objective function, which is called as follows:
%
%   value = objFctHandle(objFctSettings,    objFctParams) or
%   value = objFctHandle(objFctSettings{:}, objFctParams).
%
%   Here, objFctParams is a structure containing the current parameters (see the
%   input argument objFctParams below).
%
%   The second case is used if objFctSettings is a cell array, thus allowing for
%   an arbitrary number of additional constant input arguments (see input
%   argument objFctSettings below).
%
%   If the objective function handle is empty, the distance to a randomly chosen
%   optimal parameter vector is used as cost value (for testing purposes).
%
%   objFctSettings (optional):
%   Additional fixed settings to be passed (a cell array will be expanded using
%   {:}) to the objective function. If no additional settings are needed, set
%   objFctSettings to an empty cell: {}. If a cell array is needed as an
%   additional input, wrap it in another cell (e.g. objFctSettings = { myCell };
%
%   objFctParams (optional):
%   Struct with initial parameters in its fields. Each field needs to contain a
%   numeric scalar or column vector. Example:
%
%     objFctParams.parameter1 = 1;
%     objFctParams.parameter2 = 2;
%
%   emailParams (optional):
%   Struct with fields serveraddress, fromaddress, toaddress, and, if needed,
%   username and password. The parameters are used for sending E-mail
%   notifications about the optimization progress.
%
%   optimInfo (optional):
%   Info about the current optimization task. The fields 'title' and 'subtitle'
%   are displayed and included in saved files if existing. No influence on
%   optimization.
%
%   resultFileName (optional):
%   The result file resultFileName saved during a former optimization by
%   differentialevolution.m is loaded and the previous optimization is
%   continued. The population of parameter vectors saved in the file is
%   restored. The optimization parameters may be changed, but not every change
%   is allowed. CAUTION! Changing optimization parameters when continuing an
%   optimization may lead to wrong or misleading results! If any value of the
%   former input arguments is empty, the value saved in the result file is used.
%
%
%   Struct DEParams:
%   ================
%
%   The struct DEParams must contain the following fields (use function
%   GETDEFAULTPARAMS to generate a struct with default parameters):
%
%   VTR            "Value To Reach". The optimization is stopped if a cost 
%                  value <= VTR in a minimization problem or a cost value >= VTR
%                  in a maximization problem is found. Set to empty matrix or
%                  NaN for no VTR.
%   NP             Number of population members (e.g. 10 * dimension).
%   F              DE-stepsize F from interval [0, 2]. A good initial guess
%                  is the interval [0.5, 1], e.g. 0.8.
%   CR             Crossover probability constant from interval [0, 1]. If
%                  the parameters are correlated, high values of CR work better.
%                  The reverse is true for no correlation.
%   strategy       1 --> DE/best/1/exp (def.)   6 --> DE/best/1/bin
%                  2 --> DE/rand/1/exp          7 --> DE/rand/1/bin
%                  3 --> DE/rand-to-best/1/exp  8 --> DE/rand-to-best/1/bin
%                  4 --> DE/best/2/exp          9 --> DE/best/2/bin
%                  5 --> DE/rand/2/exp          else  DE/rand/2/bin
%                  Experiments suggest that /bin likes to have a slightly larger
%                  CR than /exp
%   maxiter        Maximum number of iterations.
%   maxtime        Maximum time (in seconds) before finishing optimization.
%                  Set to empty or Inf for no time limit.
%   maxclock       Time (as returned by function clock.m) when to
%                  finish optimization. Set to empty for no end time.
%   minvalstddev   Population is reinitialized if the standard deviation of
%                  the cost values in the population is lower than minvalstddev.
%   minparamstddev Population is reinitialized if the maximum parameter
%                  standard deviation (normalized to the parameter range) is
%                  lower than minparamstddev.
%   nofevaliter    Population is reinitialized if there was no function
%                  evaluation during the last nofevaliter iterations.
%   nochangeiter   Population is reinitialized if there was no change in
%                  the population during the last nochangeiter iterations.
%   infoIterations Info is displayed and current state is saved every
%                  infoIterations iterations.
%   infoPeriod     Progress information is displayed every infoPeriod
%                  seconds.
%   sendMailPeriod Progress information is sent via E-mail every
%                  sendMailPeriod seconds (usually sendMailPeriod >>
%                  infoPeriod).
%   useInitParams  If one, the given parameters in struct objFctParams
%                  OR those in the fourth column of paramDefCell are used as one
%                  of the initial population members. If two, additionally the
%                  first twenty percent of the population members are computed
%                  as the given initial parameter vector plus small random
%                  noise.
%   saveHistory    Save intermediate results for reference or for continuing
%                  an interrupted optimization.
%   displayResults Draw graphs for visualization of the optimization
%                  result.
%   feedSlaveProc  Use slave process for parallel computation.
%   maxMasterEvals Maximum number of function evaluations to be done by the
%                  master process. Warning: Use this option with caution! If
%                  maxMasterEvals is set to a number less than the number of
%                  population members and one of the slave processes is
%                  interrupted, the optimization will get stuck!
%   slaveFileDir   Base directory for saving slave files.
%   minimizeValue  If true, the evaluation value is minimized, otherwise
%                  maximized.
%   validChkHandle Handle to a function which accepts the same arguments as
%                  the objective function (see input parameter objFctHandle 
%                  above) and decides if a given parameter set is valid (e.g.
%                  subject to a constraint) or not. The function may only return
%                  1 (parameter set is valid/constraint is fulfilled) or 0
%                  (parameter set is invalid/constraint is not fulfilled) if
%                  not. Set validChkHandle to an empty string if no constraint
%                  is needed.
%   playSound      Play a short applause sound whenever a new best member
%                  was found.
%
%   If DEParams is empty or fields are missing, default parameters are used
%   (see function GETDEFAULTPARAMS) but warnings are displayed.
%
%
%   Cell array paramDefCell:
%   ========================
%
%   The cell array paramDefCell has to contain the names of the parameters to
%   optimize (first column), its ranges (second column), their quantizations
%   (third column) and optionally the initial values (fourth column). Each
%   parameter may be a real-valued scalar or column vector. See the examples
%   below for details.
%   
%
%   Example 1 (only scalar parameters):
%
%   paramDefCell = {
%     'useSmoothing',     [0    1],     1,   0
%     'nrOfCoefficients', [5   20],     1,  10
%     'threshold',        [0.01 1], 0.001, 0.5 }
%
%   The first cell in each row contains the name of the parameter, the second a
%   two-element row vector specifying the allowed range, the third the
%   quantization and the fourth the initial values (the fourth column is
%   opotional). 
%
%   The objective function objFctHandle will be called with a struct like
%   follows as last input argument:
%   
%   objFctParams = 
%         useSmoothing: 1
%     nrOfCoefficients: 17
%            threshold: 0.08
%
%   Provide a non-empty value either in objFctParams or in the fourth column of
%   paramDefCell as initial value. If both are present, a warning message is
%   issued and the value in paramDefCell is used. If objFctParams is empty and
%   no initial parameters are given in paramDefCell, the centers of the
%   parameter ranges are used as initial parameters.
%
%   Using parameter quantization allows for the use of binary variables like
%   'useSmoothing' above as well for parameters that are of integer nature, like
%   a number of coefficients. If the quantization of a parameter is set to zero,
%   the parameter is not quantized. Using a quantization grid for continuous
%   parameters can save computational effort. If DEParams.saveHistory is true,
%   all evaluated parameter vectors are saved with the corresponding cost value
%   and the same parameter value will never be evaluated twice. With
%   quantization, it is more likely that a generated parameter vector was
%   already evaluated and saved before.
%
%
%   Example 2 (vector parameter):
%
%   paramDefCell = {
%       'weight_vector', [0 1; 0 2], [0.01; 0.02], [0.5; 0.5] };
%
%   Here, the parameter 'weight_vector' is defined as a two-element column
%   vector. The ranges are set to [0, 1] for the first element and [0, 2]
%   for the second. The quantizations are 0.01 and 0.02 and the initial
%   values are both 0.5.
%
%   The provided structure objFctParams may contain further fixed parameters
%   and/or the current parameter values. The fields with the names of the
%   parameters given in paramDefCell are overwritten by the values of the
%   current parameters. 
%
%
%   Example 3 (vector parameter):
%
%   paramDefCell = { '', [0 1; 0 2], [0.01; 0.02], [0.5; 0.5] };
%
%   In this special case (one single parameter with empty name), the
%   objective function is called as
%
%   value = objFctHandle(objFctSettings,    paramVec) or
%   value = objFctHandle(objFctSettings{:}, paramVec)
%
%   with the current parameters in column vector paramVec.
%
%
%   Miscellaneous:
%   ==============
%
%   If parameter DEParams.saveHistory is set to one, the current optimization
%   state including all tested members etc. is saved in the file
%   AAA_result_BBB_NN.mat, where AAA is the name of the objective function, BBB
%   is the name of the current host and NN is a number between 1 and 99 (to
%   avoid overwriting old results). The saved file can be used to continue a
%   former optimization run (see special calling modes below).
%
%   A 'time over'-file is saved at the start of the optimization. The
%   optimization is stopped if this file is deleted. Using this mechanism to
%   stop the simulation avoids interrupting Matlab during saving a file, which
%   can make a file unaccessible for the rest of the session and lead to
%   repeated warning messages. The name of the file to delete is
%   AAA_timeover_BBB.mat, where AAA is the name of the objective function and
%   BBB is the hostname. Result- and 'time over'-files are saved in directory
%   'data' if existing, otherwise in the current directory.
%
%   The optimization can be performed in parallel by more than one
%   processor/computer. Function DIFFERENTIALEVOLUTION has to be started in one
%   Matlab session, function DIFFERENTIALEVOLUTIONSLAVE in one or more other
%   Matlab sessions. Function DIFFERENTIALEVOLUTION acts as master and saves
%   information about which function to evaluate and which parameters to use
%   into files in a commonly accessible directory. The Distributed Computing
%   toolbox is not used. If input parameter slaveFileDir is empty, the directory
%   differentialevolution is used (or created) below the temporary directory
%   returned by function TEMPDIR2 (something like C:\Documents and
%   Settings\<UserName>\Local Settings\ Temp\<UserName>@<HostName>\MATLAB).
%
%   Function DIFFERENTIALEVOLUTION was developed for objective functions that
%   need relatively long for one function evaluation (several seconds or more).
%   When used with objective functions that evaluate very fast, memory problems
%   could occur. If DEParams.saveHistory is true, every evaluated parameter
%   vector is kept in memory. Further, the overhead for checking if a parameter
%   vector was already evaluated might be larger than a function evaluation
%   itself.
%
%
%   Special calling modes:
%   ======================
%
%   DIFFERENTIALEVOLUTION (without input arguments) or 
%   DIFFERENTIALEVOLUTION(DEParams):
%   A demo optimization of Rosenbrock's saddle is run using default parameters
%   or the parameters in struct DEParams.
%
%   This function is based on the differential evolution (DE) algorithm of
%   Rainer Storn (http://www.icsi.berkeley.edu/~storn/code.html). The core
%   evolutionary algorithm was taken from function devec3.m.
%
%   <a href="differentialevolution.html">differentialevolution.html</a>  
%   <a href="http://www.mathworks.com/matlabcentral/fileexchange/18593">File Exchange</a>
%   <a href="https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=KAECWD2H7EJFN">Donate via PayPal</a>
%
%   Markus Buehren
%   Last modified 30.08.2014
%
%   See also GETDEFAULTPARAMS, DEMO1, DEMO2, DEMO3, DISPLAYOPTIMIZATIONHISTORY,
%   DIFFERENTIALEVOLUTIONSLAVE.

optimResult    = [];
resultFileName = '';

if (nargin == 0) || ((nargin == 1) && isstruct(varargin{1}))
  
  % No input arguments given or parameter structure given as only input argument
  % for demo.
  if nargin == 1
    DEParams = varargin{1};
  else
    DEParams = getdefaultparams;
  end
  
  % Set parameters set for demo.
  objFctParams.parameter1 = -1;
  objFctParams.parameter2 = -1;
  objFctHandle            = @rosenbrocksaddle;
  objFctSettings          = 100;
  paramDefCellInput       = {
    'parameter1', [-2 2], 0.05
    'parameter2', [-2 2], 0.05 };
  optimInfo.title         = 'Optimization of Rosenbrock''s saddle';
  emailParams             = [];
  DEParams.feedSlaveProc  = 1;
  DEParams.infoIterations = 1;
  DEParams.infoPeriod     = 10;  % in seconds
  DEParams.maxiter        = 100;
  DEParams.maxtime        = 60;  % in seconds
  
  % set random state to always use the same population members
  setrandomstate(1);

elseif (nargin == 1)
  
  error(textwrap2(sprintf([...
    'If only a single input argument is given, it must be a parameter struct or the file ', ...
    'name of a result file saved before.'])));
  
elseif (nargin >= 3) && (nargin <= 8)
  
  % standard input parameters given
  DEParams          = varargin{1};
  paramDefCellInput = varargin{2};
  objFctHandle      = varargin{3};

  if nargin >= 4
    objFctSettings = varargin{4};
  else
    objFctSettings = {}; 
  end
  
  if nargin >= 5
    objFctParams = varargin{5};
  else
    objFctParams = []; 
  end
  
  if nargin >= 6
    emailParams = varargin{6};
  else
    emailParams = []; 
  end
  
  if nargin >= 7
    optimInfo = varargin{7};
  end
  
  if ~exist('optimInfo', 'var') || isempty(optimInfo) || ~isstruct(optimInfo)
    optimInfo       = [];
    optimInfo.title = 'DE optimization';
  end
  
  if nargin >= 8
    resultFileName = varargin{8};
  end
  
else
  
  error(textwrap2(sprintf([...
    'Input argument number/combination not supported. Please type ''help %s'' for more ', ...
    'information.'], mfilename)));

end

if ~isempty(resultFileName)
  
  % Result file name given for continuation of optimization.
  if exist(resultFileName, 'file')
    
    % load result file
    sem = setfilesemaphore(resultFileName, 'set always');
    load(resultFileName, 'optimResult');
    removefilesemaphore(sem);
    
    % check data saved in file
    if isempty(optimResult) || ~isfield(optimResult, 'fileFormatVersion')
      error(textwrap2(sprintf(...
        'Given file %s seems not to be generated by differentialevolution.m', resultFileName)));
    elseif abs(optimResult.fileFormatVersion - 1.0) > 1e-8
      error(textwrap2(sprintf('Given file %s has wrong file format version.', resultFileName)));
    end
  else
    error(textwrap2(sprintf('Given result file %s is not existing!', resultFileName)));
  end
  
  % optimization state has been loaded from file above
  changedParametersFound = false;
  
  if ~isempty(DEParams)
    checkDEParamsNewVsLoaded(DEParams, optimResult.DEParams);
  else
    DEParams = optimResult.DEParams;
  end
  
  if ~isempty(paramDefCellInput)
    changedParametersFound = changedParametersFound || ...
        ~isequalwithequalnans(paramDefCellInput, optimResult.paramDefCellInput);
    checkParamDefCellNewVsLoaded(paramDefCellInput, optimResult.paramDefCellInput);
  else
    paramDefCellInput = optimResult.paramDefCellInput;
  end
  
  if ~isempty(objFctHandle)
    changedParametersFound = changedParametersFound || ...
        ~isequalwithequalnans(objFctHandle, optimResult.objFctHandle);
  else
    objFctHandle = optimResult.objFctHandle;
  end
  
  if ~isempty(objFctSettings)
    changedParametersFound = changedParametersFound || ...
        ~isequalwithequalnans(objFctSettings, optimResult.objFctSettings);
  else
    objFctSettings = optimResult.objFctSettings;
  end
  
  if ~isempty(objFctParams)
    changedParametersFound = changedParametersFound || ...
        ~isequalwithequalnans(objFctParams, optimResult.objFctParams);
  else
    objFctParams = optimResult.objFctParams;
  end
  
  if isempty(optimInfo)
    optimInfo = optimResult.info;
  end

  if isempty(emailParams)
    emailParams = optimResult.emailParams;
  end

  
  if changedParametersFound
    disp(textwrap2(sprintf([...
      'Changed optimization parameters found. Please be careful with changing parameters ', ...
      'when continuing an optimization because changes may lead to errors or wrong results!'])));
  end
end


% get default DE parameters
DEParamsDefault = getdefaultparams;

if isempty(DEParams)
  
  DEParams = DEParamsDefault;
  
else
  
  % backwards compatibility
  if isfield(DEParams, 'refreshiter')
    disp('Warning: Parameter refreshiter was renamed to infoIterations.');
    DEParams.infoPeriod = DEParams.refreshiter;
    DEParams = rmfield(DEParams, 'refreshiter');
  end
  
  if isfield(DEParams, 'refreshtime')
    disp('Warning: Parameter refreshtime was renamed to infoPeriod.');
    DEParams.infoPeriod = DEParams.refreshtime;
    DEParams = rmfield(DEParams, 'refreshtime');
  end
  
  if isfield(DEParams, 'refreshtime3')
    disp('Warning: Parameter refreshtime3 was renamed to sendMailPeriod.');
    DEParams.sendMailPeriod = DEParams.refreshtime3;
    DEParams = rmfield(DEParams, 'refreshtime3');
  end
  
  % complete missing fields of input DE parameter structure
  fieldNames = fieldnames(DEParamsDefault);
  for k = 1:length(fieldNames)
    if ~isfield(DEParams, fieldNames{k})
      DEParams.(fieldNames{k}) = DEParamsDefault.(fieldNames{k});
      disp(textwrap2(sprintf(...
        'Warning: Field ''%s'' not included in DEParams. Using default value.', fieldNames{k})));
    end
  end
  
  % check for unsupported fields in struct DEParams
  fieldNames = fieldnames(DEParams);
  errorFound = false;
  for k = 1:length(fieldNames)
    if ~isfield(DEParamsDefault, fieldNames{k})
      disp(textwrap2(sprintf(...
        'Field ''%s'' of struct DEParams not supported by %s.', fieldNames{k}, mfilename)));
      DEParams = rmfield(DEParams, fieldNames{k});
      errorFound = true;
    end
  end
  if errorFound
    error('Unsupported fields found in struct DEParams.');
  end
end

% check input parameters
checkinputs(paramDefCellInput, objFctParams);

% modify paramDefCell if there are vector-valued parameters
paramDefCell = paramDefCellInput;
k = 1;
parameterDimVector = [];
while k <= size(paramDefCell, 1)
  
  parameterDim = size(paramDefCell{k, 2}, 1);
  if parameterDim == 1
    
    % scalar parameter, save dimension
    parameterDimVector(k, 1) = 1; %#ok
    k = k + 1;
    
    if isempty(paramDefCell{1,1})
      % scalar parameter with empty name
      paramDefCell{1, 1} = '_1';
    end
    
  else
    
    % vector parameter, introduce new rows in paramDefCell
    parameterDimVector(k : k + parameterDim - 1, 1) = parameterDim; %#ok
    parameterName =  paramDefCell{k,1};
    paramDefCell  = [paramDefCell(1:k,:); cell(parameterDim-1, size(paramDefCell,2)); ...
                     paramDefCell(k+1:end,:)];
    
    for d = parameterDim:-1:1
      paramDefCell{k+d-1, 1} = sprintf('%s_%d', parameterName, d);
      for col = 2:size(paramDefCell,2)
        paramDefCell{k+d-1,col} = paramDefCell{k, col}(d,:);
        if (col == 4) && isnan(paramDefCell{k+d-1,col}) % initial value = NaN
          paramDefCell{k + d - 1, col} = [];
        end
      end
    end
    k = k + parameterDimVector(k,1);
    
  end
end

% initialize functions
getparametername (paramDefCell, parameterDimVector);
displaybestmember(paramDefCell);

% get parameter bounds
parameterBounds = cell2mat(paramDefCell(:,2));
parGridVector   = cell2mat(paramDefCell(:,3));
D               = size(parameterBounds, 1);
XVmin           = parameterBounds(:, 1)';
XVmax           = parameterBounds(:, 2)';

% check parameter bounds and quantization
minQuantizationUser = 1e-12;
checkBoundsAndQuantization(XVmin, XVmax, parGridVector, minQuantizationUser);

% compute number of possible parameter vectors
if all(parGridVector > 0)
  nrOfPossibleMembers = ...
      prod(floor((diff(parameterBounds, 1, 2) + 0.5 * parGridVector) ./ parGridVector) + 1);
else
  nrOfPossibleMembers = inf;
end

% get population size NP
if ~isempty(optimResult) && ~isempty(optimResult.currentPopulation)
  NP = size(optimResult.currentPopulation, 2);
else
  NP = min(DEParams.NP, nrOfPossibleMembers);
end

% get parameters
% TODO: pass struct DEParams to subfunctions instead of unwrapping everything.
VTR            = DEParams.VTR;
useInitParams  = DEParams.useInitParams;
infoPeriod     = DEParams.infoPeriod;
sendMailPeriod = DEParams.sendMailPeriod;
maxtime        = DEParams.maxtime;
maxclock       = DEParams.maxclock;
saveHistory    = DEParams.saveHistory;
displayResults = DEParams.displayResults;
feedSlaveProc  = DEParams.feedSlaveProc;
slaveFileDir   = DEParams.slaveFileDir;
maxMasterEvals = DEParams.maxMasterEvals;
playSound      = DEParams.playSound;
validChkHandle = DEParams.validChkHandle;

% check parameters
if (DEParams.maxiter <= 0)
  error('Parameter maxiter must be greater than zero.');
end
if displayResults && ~DEParams.saveHistory
  fprintf('Warning: Optimization history can not be displayed if not saved.\n');
  displayResults = 0;
end
infoIterations = floor(DEParams.infoIterations);

% get initial parameter vector
if useInitParams && (isempty(optimResult) || isempty(optimResult.currentPopulation))
  initialMem = zeros(1,D);
  if size(paramDefCell, 2) == 4
    % use initial parameters from fourth column of paramDefCell
    parNr = 1;
    while parNr <= D
      if ~isempty(paramDefCell{parNr, 4})
        % check if objFctParams also contains initial value
        parameterName = getparametername(parNr, 2);
        index = parNr:(parNr + parameterDimVector(parNr) - 1);
        initialMem(index) = cell2mat(paramDefCell(index,4))';
        
        % warn if overwriting initial values in objFctParams
        if isstruct(objFctParams) && isfield(objFctParams, parameterName) && ...
            ~isempty(objFctParams.(parameterName)) && ~all(isnan(objFctParams.(parameterName)))
          if ~isequal(objFctParams.(parameterName), initialMem(index))
            disp(textwrap2(sprintf(...
              ['Warning: Initial value of parameter ''%s'' in struct objFctParams was ', ...
               'overwritten by settings in paramDefCell.'], parameterName)));
          end
        elseif isnumeric(objFctParams) && ~isempty(objFctParams) && ~all(isnan(objFctParams))
          if isscalar(objFctParams)
            disp(textwrap2(sprintf(...
              ['Warning: Initial parameter value objFctParams was overwritten by settings in', ...
               'paramDefCell.'], parameterName)));
          else
            disp(textwrap2(sprintf(...
              ['Warning: Initial parameter vector objFctParams was overwritten by settings in', ...
               'paramDefCell.'], parameterName)));
          end
        end
      end
      
      for d = 1:parameterDimVector(parNr)
        index = parNr + d - 1;
        if isnan(initialMem(index))
          parameterName = getparametername(index, 1);
          disp(textwrap2(sprintf(...
            ['Warning: No initial value for parameter %s given. Using center of range interval', ...
             'as initial value.'], parameterName)));
          initialMem(index) = 0.5 * (XVmin(index) + XVmax(index));
        end
      end
      parNr = parNr + parameterDimVector(parNr);
    end
    checkInitialMem = true;
    
  elseif isempty(objFctParams)
    
    % no initial parameter set given
    disp('Warning: Option DEParams.useInitParams is true but no initial parameter set is given.');
    useInitParams = 0;
    checkInitialMem = false;
    
  else
    
    % check if initial values are given by objFctParams and collect them
    if isstruct(objFctParams)
      parNr = 1;
      while parNr <= D
        parameterDim  = parameterDimVector(parNr);
        index = parNr:parNr+parameterDim-1;
        parameterName = getparametername(parNr, 2);
        if isfield(objFctParams, parameterName)
          initialMem(index) = objFctParams.(parameterName)';
        else
          disp(textwrap2(sprintf(...
            ['Warning: No initial value for parameter %s given. Using center of range interval', ...
             'as initial value.'], parameterName)));
          initialMem(index) = 0.5 * (XVmin(index) + XVmax(index));
        end
        parNr = parNr + parameterDim;
      end
    elseif strcmp(paramDefCell{1,1}, '_1')
      initialMem = objFctParams;
      for parNr = 1:D
        parameterName = getparametername(parNr, 1);
        if isnan(initialMem(parNr))
          disp(textwrap2(sprintf(...
            ['Warning: No initial value for parameter %s given. Using center of range interval', ...
             'as initial value.'], parameterName)));
          initialMem(parNr) = 0.5 * (XVmin(parNr) + XVmax(parNr));
        end
      end
    end
    checkInitialMem = true;
    
  end
  
  % check if initial member is on quantization grid
  if checkInitialMem
    [ignore, quantInitialMem] = evaluateParameterContraints(...
      objFctParams, paramDefCell, parameterDimVector, initialMem); %#ok
    for parNr = 1:D
      if (~isnan(initialMem(parNr))) && (paramDefCell{parNr,3} > 0) && ...
          (abs(initialMem(parNr) - quantInitialMem(parNr)) > eps)
        disp(textwrap2(sprintf(...
          ['Warning: Initial value of parameter %s (%g) not on quantization grid (next ', ...
           'grid value: %g).'], getparametername(parNr, 1), initialMem(parNr), ...
          quantInitialMem(parNr))));
      end
    end
  end
end

% check if validChkHandle is valid
if isempty(validChkHandle)
  validChkHandle = @alwaysvalid; % handle to function that always returns true
elseif ~isa(validChkHandle, 'function_handle')
  if ischar(validChkHandle)
    validChkHandle = str2func(validChkHandle);
  else
    error('validChkHandle is neither empty nor a string nor a function handle.');
  end
end

% get default width for wrapping displayed information
textWidth = textwrap2;

% display title
if isempty(optimResult)
  verb = 'Starting';
else
  verb = 'Continuing';
end
disp(repmat('*', 1, textWidth));
dateString = datestr(clock, 'mmm dd, HH:MM');
if isstruct(optimInfo) && isfield(optimInfo, 'title')
  disp(textwrap2(sprintf('%s ''%s'' at %s.', verb, optimInfo.title, dateString)));
  if isfield(optimInfo, 'subtitle')
    disp(textwrap2(optimInfo.subtitle));
  end
else
  fprintf('%s optimization at %s.\n', verb, dateString);
end

% display number of possible parameter vectors
if isfinite(nrOfPossibleMembers)
  fprintf('Number of possible parameter vectors: %g\n', nrOfPossibleMembers);
else
  fprintf('Infinite number of possible parameter vectors.\n');
end

% Quit if maxtime is less or equal zero (can be used to check if all initial parameter values
% are on the quantization grid).
if (DEParams.maxtime <= 0) || (~isempty(maxclock) && etime(clock, maxclock) > 0)
  disp(repmat('*', 1, textWidth));
  disp(textwrap2(sprintf(...
    'Function %s was left because parameter maxtime is less or equal zero.\n', mfilename)));
  if nargout > 0
    varargout = {[], [], [], 0, ''};
  end
  return
end

% get slave file directory
if feedSlaveProc
  % build name of slave file directory
  if isempty(slaveFileDir)
    slaveFileDir = concatpath(tempdir2, 'differentialevolution');
  end
  % create slave file directory if not existing
  if ~exist(slaveFileDir, 'dir')
    mkdir(slaveFileDir);
  end
else
  slaveFileDir = '';
end

% save 'time over'-file
if ~isempty(objFctHandle)
  objFctName = strrep(func2str(objFctHandle), '/', '_');
else
  objFctName = 'test';
end
timeOverFileName = sprintf('%s_timeover_%s.mat', objFctName, gethostname);
if exist('./data', 'dir')
  timeOverFileName = ['data/' timeOverFileName];
end
info = 'Delete this file to stop parameter optimization.'; %#ok
sem = setfilesemaphore(timeOverFileName, 'set always');
save(timeOverFileName, 'info');
removefilesemaphore(sem);

% get minMaxSign depending on parameter DEParams.minimizeValue
if DEParams.minimizeValue
  minMaxSign =  1; % minimization is default behavior
else
  minMaxSign = -1;
end

% initialize variables
valstddev         = inf;              % cost vector standard deviation
paramstddev       = inf;              % mean parameter standard deviation
nofevalCounter    = 0;                % number of iterations without any function evaluation
noChangeCounter   = 0;                % number of iterations without any population change
nfeval.overall    = 0;                % number of function evaluations
nfeval.last       = 0;                % number of function evaluations before current iteration
nfeval.saved      = 0;                % number of evaluations that were saved
nfeval.slave      = 0;                % number of evaluations performed by slave process

if isempty(optimResult)
  
  % initialize more variables
  pop             = zeros(NP, D);     % population array
  val             = nan(1, NP);       % cost vector
  bestval         = minMaxSign * inf; % best cost value so far
  bestvalhist     = [];               % history of best values
  bestmem         = [];               % best member so far
  bestmemhist     = [];               % history of best member
  valstddevhist   = [];               % history of cost vector standard deviation
  paramstddevhist = [];               % history of mean parameter standard deviation
  allval          = [];               % vector with all computed cost values
  allmem          = [];               % matrix with all tested vectors as columns
                                      % note: parameter vectors are saved in pop as rows, in 
                                      % allmem as columns!
else
  
  % restore variables from previous optimization run
  pop             = optimResult.currentPopulation';
  val             = optimResult.currentCostValues;
  bestval         = optimResult.bestEvaluationValue;
  bestvalhist     = optimResult.bestValueHistory;
  bestmem         = optimResult.bestMember';
  bestmemhist     = optimResult.bestMemberHistory;
  valstddevhist   = optimResult.costValueStdDevHistory;
  paramstddevhist = optimResult.parameterStdDevHistory;
  allval          = optimResult.allEvaluationValues;
  allmem          = optimResult.allTestedMembers;
  initval         = nan;
  initmem         = nan;
  
end

% clear persistent variables in subfunctions
clear getparametername timeovercheck displayprogressinfo
clear displaybestmember
saveoptimizationstate();
computeevaluationvalue();

% initialize function sendmailblat
clear sendmailblat
sendEmail = sendmailblat([], [], emailParams);

% save current time
startTime        = mbtime;
nextInfoTime     = startTime + infoPeriod;
lastInfoIterTime = -inf;

% save current (empty) state or state loaded from file
if isempty(optimResult)
  state = 'Empty state before first iteration.';
else
  state = sprintf('State loaded from file %s.', resultFileName);
end
if saveHistory
  saveoptimizationstate(...
    paramDefCellInput, paramDefCell, parameterDimVector, optimInfo, [], [], [], [], 0, 0, [], ...
    [], startTime, state, DEParams, [], [], objFctName, objFctHandle, objFctSettings, ...
    objFctParams, emailParams, 1, 1);
end

%%%%%%%%%%%%%%%%%%%%%%%%%%%
% start main program loop %
%%%%%%%%%%%%%%%%%%%%%%%%%%%
disp(repmat('*', 1, textWidth));
iterationNr         = 0;
displayMeanEvalTime = true;
timeOver            = false;
startLoopTime       = mbtime;

while ...
    ~timeOver && ...
    (iterationNr < DEParams.maxiter) && ...
    (isempty(VTR) || isnan(VTR) || (bestval * minMaxSign > VTR * minMaxSign))
  
  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  % Initialize or re-initialize population %
  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  initialization   = (iterationNr == 0) && (isempty(optimResult) || isempty(pop));
  reinitialization = ...
      (valstddev       <  DEParams.minvalstddev)   || ...
      (paramstddev     <  DEParams.minparamstddev) || ...
      (noChangeCounter >= DEParams.nochangeiter)   || ...
      (nofevalCounter  >  DEParams.nofevaliter);
  
  if initialization
    
    % initialization
    if useInitParams > 0
      % first population member: current parameters
      pop(1,:) = initialMem;
      istart = 2;
    else
      % initialize all population members randomly
      istart = 1;
    end
    
    if (nrOfPossibleMembers <= NP) && (D == 1) && (paramDefCell{1,3} ~= 0)
      % if only one scalar parameter to optimize, set all possible members
      % directly (no random initialization)
      
      if useInitParams > 0
        % get and quantize first member
        [ignore, firstMem] = evaluateParameterContraints(...
          objFctParams, paramDefCell, parameterDimVector, pop(1,:)); %#ok
      end
      
      % generate equidistant vector
      pop = (XVmin(1) : paramDefCell{1,3} : (XVmax(1) + 0.5 * paramDefCell{1,3}))';
      
      if useInitParams > 0
        % evaluate initial member first, after that those
        % that are next to initial member
        [ignore, sortIndex] = sort(abs(pop(:,1) - firstMem)); %#ok
        pop = pop(sortIndex,:);
        
        % do not use random initialization later
        istart = NP + 1;
      end
      pop = pop(1:NP, :);
      
    elseif useInitParams == 2
      
      % next population members: current parameter vector plus random noise
      NPAdd = min(round(0.4 * NP), NP - istart + 1);
      if NPAdd > 0
        memIndex = istart: (istart + NPAdd - 1);
        istart   = istart + NPAdd + 1;
        pop      = computerandominitialization(...
          1, pop, memIndex, paramDefCell, objFctSettings, parameterDimVector, XVmax, XVmin, ...
          validChkHandle);
      end
    end
    initialization = true;
    
  elseif reinitialization
    
    % re-initialization
    fprintf('Re-initializing population in iteration %d.\n', iterationNr);
    if valstddev < DEParams.minvalstddev
      fprintf('Evaluation value standard deviation below threshold (%g < %g).\n', ...
              valstddev, DEParams.minvalstddev);
    elseif paramstddev < DEParams.minparamstddev
      fprintf('Mean parameter standard deviation below threshold (%g < %g).\n', ...
              paramstddev, DEParams.minparamstddev);
    elseif noChangeCounter >= DEParams.nochangeiter
      fprintf('Population did not change during last %d iterations.\n', ...
              DEParams.nochangeiter);
    elseif nofevalCounter > DEParams.nofevaliter
      fprintf('No function evaluations during the last %d iterations.\n', ...
              DEParams.nofevaliter);
    end
    disp(' ');
    
    if minMaxSign > 0
      [val, index] = sort(val);
    else
      [val, index] = sort(-val); % not using 'descend' for backwards compatibility
      val = -val;
    end
    
    istart = max(1, round(0.2 * NP)); % keep best twenty percent of the population members
    index = index(1:istart-1);
    pop(1:istart-1,:) = pop(index,:);
    val(1:istart-1)   = val(index);
    
  end
  
  if initialization || reinitialization
    
    % initialize population members from istart to NP randomly
    pop = computerandominitialization(...
      2, pop, istart:NP, paramDefCell, objFctSettings, parameterDimVector, XVmax, XVmin, ...
      validChkHandle);
    
    % feed slave process
    if feedSlaveProc 
      generatefilesforslaveprocess(...
        objFctHandle, objFctParams, objFctSettings, paramDefCell, parameterDimVector, pop, ...
        allmem, iterationNr, saveHistory, slaveFileDir, validChkHandle);
    end
    
    % evaluate initial population members
    for memberNr = 1:NP
      
      % evaluate member
      [val(memberNr), pop(memberNr,:), nfeval, allval, allmem] = computeevaluationvalue(...
        pop(memberNr,:), nfeval, timeOver, objFctParams, paramDefCell, parameterDimVector, ...
        objFctSettings, objFctHandle, saveHistory, allval, allmem, iterationNr, memberNr, ...
        NP, slaveFileDir, maxMasterEvals, validChkHandle, XVmin, XVmax);
      
      if initialization && (memberNr == 1)
        
        % set initial value
        bestval = val(1);
        if isnan(bestval)
          % set to highest possible value
          bestval = minMaxSign * Inf;
        elseif isinf(bestval)          
          if (bestval > 0) && (minMaxSign < 0)
            error(textwrap2(sprintf([...
              'Objective function value of initial parameter vector may not be +Inf in ', ...
              'maximization problem.'])));
          elseif (bestval < 0) && (minMaxSign > 0)
            error(textwrap2(sprintf([...
              'Objective function value of initial parameter vector may not be -Inf in ', ...
              'minimization problem.'])));
          end
        end
        initval = bestval;
        
        % best member so far
        bestmem = pop(1,:);
        initmem = bestmem;
        
        % display initial member
        state = 'Initial parameter set.';
        displaybestmember(paramDefCell, parameterDimVector, initval, initmem, ...
                          allval, initval, initmem, 1, state, optimInfo, sendEmail, playSound);
        
        % display time needed for first function evaluation
        if mbtime - startLoopTime > 1
          fprintf('First function evaluation time: %s\n', formattime(mbtime - startLoopTime));
        end
        
        % save initial state
        if saveHistory
          saveoptimizationstate(...
            paramDefCellInput, paramDefCell, parameterDimVector, optimInfo, bestval, bestmem, ...
            bestval, bestmem, 0, 0, pop, val, startTime, state, DEParams, allval, allmem, ...
            objFctName, objFctHandle, objFctSettings, objFctParams, emailParams, 0, 0);
        end
        
      else
        
        % check if current member is overall best
        if isfinite(val(memberNr)) && ...
            (val(memberNr) * minMaxSign < bestval * minMaxSign)
          bestval = val(memberNr);
          bestmem = pop(memberNr,:);
        end
        
        % set current state
        if initialization
          state = sprintf('In initialization, %d of %d members checked.', ...
                          memberNr, NP);
        else
          state = sprintf('In iteration %d, %d of %d members re-initialized.', ...
                          iterationNr, memberNr, NP);
        end
      end
      
      % display best member
      displaybestmember(paramDefCell, parameterDimVector, bestval, bestmem, allval, ...
                        initval, initmem, 0, state, optimInfo, sendEmail, playSound);
      
      % display current state and progress information
      if mbtime - nextInfoTime >= 0
        nextInfoTime = nextInfoTime + infoPeriod * ...
            (1 + floor((mbtime - nextInfoTime) / infoPeriod));
        disp(state);
        displayprogressinfo(...
          startLoopTime, state, sendMailPeriod, maxtime, maxclock, timeOver, nfeval, ...
          nrOfPossibleMembers, pop, bestval, allval, optimInfo, sendEmail);
      end
      
      % display mean function evaluation time
      if displayMeanEvalTime && (nfeval.overall == 5) && (mbtime - startLoopTime > 1)
        fprintf('Mean function evaluation time after %d runs: %s\n', nfeval.overall, ...
                formattime((mbtime - startLoopTime) / nfeval.overall));
        displayMeanEvalTime = false;
      end
      
      if saveHistory
        saveoptimizationstate(...
          paramDefCellInput, paramDefCell, parameterDimVector, optimInfo, bestval, bestmem, ...
          bestval, bestmem, 0, 0, pop, val, startTime, state, DEParams, allval, allmem, ...
          objFctName, objFctHandle, objFctSettings, objFctParams, emailParams, 0, 0);
      end
      
      % check time
      timeOver = timeovercheck(startTime, maxtime, maxclock, timeOverFileName, timeOver);
      
    end % for memberNr = 1:NP
    
    iterationNr = iterationNr + 1;
    
  end % if initialization || reinitialization
  
  if timeOver
    break
  end
  
  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  % compute competing population %
  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  % In function computenewpopulation, you can place your own favorite algorithm!
  
  popold = pop;
  popnew = computenewpopulation(pop, bestmem, DEParams);
  
  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  % check which vectors will survive %
  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  
  % feed slave process
  if feedSlaveProc
    generatefilesforslaveprocess(...
      objFctHandle, objFctParams, objFctSettings, paramDefCell, parameterDimVector, popnew, ...
      allmem, iterationNr, saveHistory, slaveFileDir, validChkHandle);
  end
  
  for memberNr = 1:NP
    
    % check cost of competitor
    [tempval, popnew(memberNr,:), nfeval, allval, allmem] = computeevaluationvalue(...
      popnew(memberNr,:), nfeval, timeOver, objFctParams, paramDefCell, parameterDimVector, ...
      objFctSettings, objFctHandle, saveHistory, allval, allmem, iterationNr, memberNr, NP, ...
      slaveFileDir, maxMasterEvals, validChkHandle);
    
    if isfinite(tempval)
      % if competitor is better than value in cost array or old vector was not evaluated 
      % (tempval = NaN), replace old vector with new one (for new iteration) and save value in 
      % cost array
      if (tempval * minMaxSign < val(memberNr) * minMaxSign) || ~isfinite(val(memberNr))
        pop(memberNr,:) = popnew(memberNr,:);
        val(memberNr)   = tempval;
        
        % if competitor is better than the best one ever, set new best value and new best
        % parameter vector ever
        if (tempval * minMaxSign < bestval * minMaxSign)
          bestval = tempval;
          bestmem = popnew(memberNr,:);
        end
      end
    elseif isinf(tempval)          
      if (tempval > 0) && (minMaxSign < 0)
        warning(['Objective function value of initial parameter vector may', ...
                 'not be +Inf in maximization problem.']); %#ok
      elseif (tempval < 0) && (minMaxSign > 0)
        warning(['Objective function value of initial parameter vector may ', ...
                 'not be -Inf in minimization problem.']); %#ok
      end
    end
    
    % display best member
    state = sprintf('In iteration %d, %d of %d competitors checked.', iterationNr, memberNr, NP);
    displaybestmember(paramDefCell, parameterDimVector, bestval, bestmem, ...
                      allval, initval, initmem, 0, state, optimInfo, sendEmail, playSound);
    
    % display current state and progress information
    if mbtime - nextInfoTime >= 0
      nextInfoTime = nextInfoTime + infoPeriod * (1 + floor((mbtime - nextInfoTime) / infoPeriod));
      disp(state);
      displayprogressinfo(...
        startLoopTime, state, sendMailPeriod, maxtime, maxclock, timeOver, nfeval, ...
        nrOfPossibleMembers, pop, bestval, allval, optimInfo, sendEmail);
    end
    
    if saveHistory
      saveoptimizationstate(...
        paramDefCellInput, paramDefCell, parameterDimVector, optimInfo, bestval, bestmem, ...
        bestvalhist, bestmemhist, valstddevhist, paramstddevhist, pop, val, startTime, state, ...
        DEParams, allval, allmem, objFctName, objFctHandle, objFctSettings, objFctParams, ...
        emailParams, 0, 0);
    end
    
    % check time
    timeOver = timeovercheck(startTime, maxtime, maxclock, timeOverFileName, timeOver);
    
  end % for memberNr = 1:NP
  
  %%%%%%%%%%%%%%%%%%%%
  % finish iteration %
  %%%%%%%%%%%%%%%%%%%%
  
  % compute cost value and population standard deviation
  index = isfinite(val);
  if any(index)
    valstddev   = std(val(index));
    paramstddev = max(std(pop(index,:),0,1)' ./ diff(cell2mat(paramDefCell(:,2)),1,2));
  else
    valstddev   = inf;
    paramstddev = inf;
  end
  
  % check if population has changed
  if isequal(pop, popold)
    noChangeCounter = noChangeCounter + 1;
  else
    noChangeCounter = 0;
  end
  
  % check if any function evaluation was done
  if nfeval.last == nfeval.overall
    nofevalCounter = nofevalCounter + 1;
  else
    nofevalCounter = 0;
  end
  
  % save history
  if saveHistory
    bestvalhist    (end+1) = bestval;     %#ok
    bestmemhist  (:,end+1) = bestmem';    %#ok
    valstddevhist  (end+1) = valstddev;   %#ok
    paramstddevhist(end+1) = paramstddev; %#ok
    
    % check if all possible members have been computed
    if length(allval) >= nrOfPossibleMembers
      timeOver = true;
    end
  end
  
  % check time
  if timeOver
    break
  end
  
  % display current state
  if ((infoIterations > 0) && (rem(iterationNr, infoIterations) == 0)) && ...
        mbtime - lastInfoIterTime > 10
    lastInfoIterTime = mbtime; % avoid many lines of output if no evaluations were done
    fprintf('Iteration %d finished.\n', iterationNr);
  end
  
  iterationNr = iterationNr + 1;
end % while (iterationNr < DEParams.maxiter) ...

%%%%%%%%%%%%%%%%%%%%%%%%
% display final result %
%%%%%%%%%%%%%%%%%%%%%%%%
disp(' ');
disp(repmat('*', 1, textWidth));

% show why optimization was finished
if iterationNr >= DEParams.maxiter
  state = sprintf('''%s'' finished after given maximum number of %d iterations.', ...
                  optimInfo.title, DEParams.maxiter);
elseif ~isempty(VTR) && (bestval * minMaxSign <= VTR * minMaxSign)
  state = sprintf('''%s'' finished after specified cost value of %2.6g was reached.', ...
                  optimInfo.title, VTR);
elseif length(allval) >= nrOfPossibleMembers
  state = sprintf('''%s'' finished after all possible %d members have been tested.', ...
                  optimInfo.title, nrOfPossibleMembers);
elseif timeOver
  if ~isempty(maxtime) && mbtime - startTime > maxtime
    state = sprintf('''%s'' finished after given amount of time.', optimInfo.title);
  elseif ~isempty(maxclock) && etime(clock, maxclock) > 0
    state = sprintf('''%s'' finished at given end time.', optimInfo.title);
  elseif ~isempty(timeOverFileName) && ~existfile(timeOverFileName);
    state = sprintf('''%s'' finished after ''time over''-file was deleted.', optimInfo.title);
  end
end
disp(textwrap2(state));
displayprogressinfo(startLoopTime, state, [], maxtime, maxclock, 1, ...
                    nfeval, nrOfPossibleMembers, pop, bestval, allval, optimInfo, sendEmail);
state = sprintf('Final result after %d iteration(s).', iterationNr);
displaybestmember(paramDefCell, parameterDimVector, bestval, bestmem, allval, ...
                  initval, initmem, 1, state, optimInfo, sendEmail, playSound);

% save final result
if saveHistory
  saveoptimizationstate(...
    paramDefCellInput, paramDefCell, parameterDimVector, optimInfo, bestval, bestmem, ...
    bestvalhist, bestmemhist, valstddevhist, paramstddevhist, pop, val, startTime, state, ...
    DEParams, allval, allmem, objFctName, objFctHandle, objFctSettings, objFctParams, ...
    emailParams, 1, 1);
end
disp(repmat('*', 1, textWidth));

% display optimization parameter history
if displayResults && saveHistory
  displayoptimizationhistory(paramDefCell, allmem, allval);
end

% remove all remaining slave files
if exist(slaveFileDir, 'dir')
  remainingSlaveFiles = findfiles(slaveFileDir, 'iteration_*_member_*_*.mat', 'nonrecursive');
  deletewithsemaphores(remainingSlaveFiles);
end

% remove time-over file
if existfile(timeOverFileName)
  mbdelete(timeOverFileName, 0);
end

if nargout > 0
  
  % compute parameter set with best member
  [bestFctParams, bestmem] = evaluateParameterContraints(...
    objFctParams, paramDefCell, parameterDimVector, bestmem);
  
  % get result file name
  if saveHistory
    resultFileName = saveoptimizationstate();
  else
    resultFileName = '';
  end
  
  varargout = {bestmem', bestval, bestFctParams, iterationNr, resultFileName};
end


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function timeOver = timeovercheck(startTime, maxtime, maxclock, timeOverFile, timeOver)

persistent lastCheckTime

if isempty(lastCheckTime)
  lastCheckTime = mbtime;
end

if timeOver
  return
end

curTime = mbtime;
if curTime - lastCheckTime > 1
  % only check once a second to save computation time
  timeOver = ...
      (~isempty(maxtime)      && ((curTime - startTime) > maxtime || maxtime == 0)) || ...
      (~isempty(maxclock)     &&  etime(clock, maxclock) > 0) || ...
      (~isempty(timeOverFile) && ~existfile(timeOverFile));
  lastCheckTime = curTime;
end


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function valid = alwaysvalid(varargin) %#ok

valid = true;


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function checkinputs(paramDefCell, objFctParams)

% check dimensions of paramDefCell
if ~iscell(paramDefCell)
  error('Input argument paramDefCell has to be a cell array.');
end
if isempty(paramDefCell)
  error('Input argument paramDefCell must not be empty.');
end
if size(paramDefCell, 2) < 3 || size(paramDefCell, 2) > 4
  error('Input argument paramDefCell has to consist of three or four columns.');
end

% check parameter names
for m = 1:size(paramDefCell, 1)
  for n = m+1:size(paramDefCell, 1)
    if strcmp(paramDefCell{m,1}, paramDefCell{n,1})
      error(textwrap2(sprintf(...
        'Parameter names in paramDefCell have to be unique. Parameter name %s was found twice.', ...
        paramDefCell{m,1})));
    end
  end
end

% check dimensions of cell contents
for k = 1:size(paramDefCell, 1)
  if (k > 1 && (isempty((paramDefCell{k,1})) || ~ischar(paramDefCell{k,1}))) || ...
      k == 1 && ~ischar(paramDefCell{k,1})
    error(textwrap2(sprintf([...
      'All cells in the first column of paramDefCell have to contain non-empty strings ', ...
      '(except when there is only one row).'])));
  end
  if isempty(paramDefCell{k,2}) || size(paramDefCell{k,2}, 2) ~= 2
    error(textwrap2([...
      'All cells in the second column of paramDefCell have to contain matrices with two ', ...
      'columns (the parameter limits).']));
  end
  if any(~isfinite(paramDefCell{k,2}))
    error(textwrap2([...
      'The parameter limit matrices may not contain Inf or NaN. You have to provide hard ', ...
      'parameter bounds in any case, sorry.']));
  end
  if isempty(paramDefCell{k,3}) || size(paramDefCell{k,3}, 2) ~= 1
    error(textwrap2([...
      'All cells in the third column of paramDefCell have to contain scalars or column vectors' ,...
      '(the parameter quantizations).']));
  end
  if size(paramDefCell{k,2}, 1) ~= size(paramDefCell{k,3}, 1)
    error(textwrap2([...
      'All vectors or matrices in the second, third and fourth row of paramDefCell have to ', ...
      'have the same number of rows.']));
  end
  if size(paramDefCell, 2) == 4
    if ~isempty(paramDefCell{k,4}) && size(paramDefCell{k,4}, 2) ~= 1
      error(textwrap2([...
        'All cells in the fourth column of paramDefCell have to be empty or contain scalars ', ...
        'or column vectors (the initial values).']));
    end
    if size(paramDefCell{k,2}, 1) ~= size(paramDefCell{k,4}, 1)
      error(textwrap2([...
        'All vectors or matrices in the second, third and fourth row of paramDefCell have to ', ...
        'have the same number of rows.']));
    end
  end
end

% check dimensions of objFctParams
if ~isempty(objFctParams) && isstruct(objFctParams)
  fieldNames = fieldnames(objFctParams);
  for k = 1:length(fieldNames)
    if ~isempty(objFctParams.(fieldNames{k})) && ...
        size(objFctParams.(fieldNames{k}), 2) ~= 1
      error('Only column vectors are allowed as parameters in objFctParams, sorry.');
    end
  end
end


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function checkDEParamsNewVsLoaded(DEParams, DEParamsLoaded)

if DEParams.NP ~= DEParamsLoaded.NP
  error(textwrap2(sprintf(...
    'Number of population members NP may not be changed when continuing optimization.')));
end

if DEParams.minimizeValue ~= DEParamsLoaded.minimizeValue
  error(textwrap2(sprintf(...
    'Value of parameter minimizeValue may not be changed when continuing optimization.')));
end

if ~isequal(DEParams.validChkHandle, DEParamsLoaded.validChkHandle)
  error(textwrap2(sprintf(...
    'Validity check function handle validity may not be changed when continuing optimization.')));
end


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function checkParamDefCellNewVsLoaded(paramDefCellInput, paramDefCellInputLoaded)

if ~isequal(paramDefCellInput(:,1), paramDefCellInputLoaded(:,1))
  error(textwrap2(sprintf(...
    'First column of paramDefCell may not be changed when continuing optimization.')));
end

for col = 2:size(paramDefCellInput, 2)
  for paramNr = 1:size(paramDefCellInput, 1)
    if any(size(paramDefCellInput{paramNr, col}) ~= size(paramDefCellInput{paramNr, col}))
      error(textwrap2(sprintf([...
        'Dimensions of range, quantization and initial values in paramDefCell may not be ', ...
        'changed when continuing optimization.'])));
    end
  end
end


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function checkBoundsAndQuantization(XVmin, XVmax, parGridVector, minQuantizationUser)

errorFound = false;
D = length(XVmin);
for parNr = 1:D
  if XVmin(parNr) > XVmax(parNr)
    disp(textwrap2(sprintf(...
      'Error: Lower bound (%g) of parameter %s is larger than upper bound (%g).', ...
      XVmin(parNr), getparametername(parNr, 1), XVmax(parNr))));
    errorFound = true;
  end
  if parGridVector(parNr) < 0
    disp(textwrap2(sprintf(...
      'Error: Negative quantization values are not allowed (parameter %s).', ...
      getparametername(parNr, 1))));
    errorFound = true;
  end

  if parGridVector(parNr) > 0 && (parGridVector(parNr) < minQuantizationUser)
    disp(textwrap2(sprintf(...
      'Error: Minimum quantization step size is %g (parameter %s).\n', minQuantizationUser, ...
      getparametername(parNr, 1))));
    errorFound = true;
  end
end
if errorFound
  error('Erroneous input parameters found.');
end


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function str = getparametername(varargin)

persistent paramDefCell parameterDimVector

if iscell(varargin{1})
  % initialization
  paramDefCell       = varargin{1};
  parameterDimVector = varargin{2};
  return
else
  % normal operation
  parNr    = varargin{1};
  nameMode = varargin{2};
end

if strcmp(paramDefCell{1,1}, '_1')
  str = sprintf('%d', parNr);
elseif parameterDimVector(parNr) > 1
  switch nameMode
    case 1
      % return for example "bla(2)" for parameter name "bla_2"
      str = regexprep(paramDefCell{parNr,1}, '_(\d)+$', '($1)');
    case 2
      % return for example "bla" for parameter name "bla_2"
      str = regexprep(paramDefCell{parNr,1}, '_\d+$', '');
    otherwise
      error('Name mode %d unknown.', nameMode);
  end
else
  str = paramDefCell{parNr,1};
end


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function pop = computerandominitialization(...
  randMode, pop, memIndex, paramDefCell, objFctSettings, parameterDimVector, XVmax, XVmin, ...
  validChkHandle)

if isempty(memIndex)
  return
end

switch randMode
  case 1
    % use first population member plus random noise
    baseMem = pop(1,:);
    randStdDev1   = 0.1;
    randStdDevAdd = 0.9;
  case 2
    % only use random numbers
    baseMem = XVmin;
    randStdDev1   = 1;
    randStdDevAdd = 0;
  otherwise
    error('Random initialization mode %d unknown.', randMode);
end

% initialize population randomly
D = size(pop, 2);
for n = memIndex
  pop(n,:) = baseMem + randStdDev1 * rand(1,D) .* (XVmax - XVmin);
end

% quantize all population vectors
quantPop = pop;
objFctParamsCell = cell(size(pop,1), 1);
for n = 1:size(pop,1)
  [objFctParamsCell{n}, quantPop(n,:)] = ...
      evaluateParameterContraints([], paramDefCell, parameterDimVector, pop(n,:)); %#ok
end

% check for multiple occurences and invalid parameter vectors and recompute random vectors
nindex = find(memIndex > 1, 1);
maxNrOfTests = min(1000 * D, 10 * length(memIndex));
nrOfRecomputations = 0;
for k = 1:maxNrOfTests
  if nindex == length(memIndex)
    break
  end
  n = memIndex(nindex);

  if any(all(abs(quantPop(1:n-1, :) - quantPop(n(ones(n-1, 1)), :)) < eps, 2)) || ...
      ~paramvecvalidity(paramDefCell, objFctSettings, objFctParamsCell{n}, ...
                        quantPop(n,:), validChkHandle)
    
    % quantized member invalid or already in population, recompute member

    % increase random standard deviation
    randStdDev = randStdDev1 + nrOfRecomputations/maxNrOfTests*randStdDevAdd;
    nrOfRecomputations = nrOfRecomputations + 1;

    % compute new random parameter vector
    randmem = baseMem + randStdDev*rand(1,D).*(XVmax - XVmin);

    % consider parameter quantization
    [objFctParamsCell{n}, quantPop(n,:), quantmem2] = ...
        evaluateParameterContraints([], paramDefCell, parameterDimVector, randmem); %#ok
    pop(n,:) = quantmem2;
  else
    % quantized member unique, step to next member
    nindex = nindex + 1;
  end
end


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function displayprogressinfo(...
  startLoopTime, state, sendMailPeriod, maxtime, maxclock, timeOver, nfeval, ...
  nrOfPossibleMembers, pop, bestval, allval, optimInfo, sendEmail) %#ok

persistent nextSendMailTime

% elapsed time
elapsedTime = mbtime - startLoopTime;
str = sprintf('Elapsed time:                   %s\n', formattime(elapsedTime));

% time left
if ~timeOver
  timeLeft = inf;
  if ~isempty(maxtime) && isfinite(maxtime)
    timeLeft = min(timeLeft, maxtime - elapsedTime);
  end
  if ~isempty(maxclock)
    timeLeft = min(timeLeft, -etime(clock, maxclock));
  end
  if isfinite(timeLeft) && timeLeft > 0
    str = [str, sprintf('Time left:                      %s\n', formattime(timeLeft))];
  end
end

% function evaluations
str   = [str, sprintf('Number of function evaluations: %d\n',   nfeval.overall)];
if nfeval.slave > 0
  str = [str, sprintf('Number of slave evaluations:    %d\n',   nfeval.slave)];
end
percentage = round(nfeval.overall / nrOfPossibleMembers * 100);
if percentage > 0
  str = [str, sprintf('Percentage of members computed: %d %%\n', percentage)];
end
if nfeval.overall - nfeval.slave > 0
  str = [str, sprintf('Mean function evaluation time:  %s\n', ...
                      formattime(elapsedTime / (nfeval.overall - nfeval.slave)))];
end

if ~isempty(allval)
  sameEvaluationValue = length(find(allval == bestval));
  if sameEvaluationValue > 1
    str = [str, sprintf('Vectors with best value:        %d\n', sameEvaluationValue)];
  end
end

disp(' ');
disp(str);

% send E-mail
if sendEmail && ~isempty(sendMailPeriod)
  if isempty(nextSendMailTime)
    nextSendMailTime = mbtime + sendMailPeriod;
  elseif mbtime - nextSendMailTime >= 0
    if ~isempty(sendMailPeriod)
      nextSendMailTime = nextSendMailTime + sendMailPeriod * ...
          (1 + floor((mbtime - nextSendMailTime) / sendMailPeriod));
    end
    subject = 'Progress information';
    if isfield(optimInfo, 'title')
      subject = [subject, sprintf(' (%s, host %s)', optimInfo.title, gethostname)];
    else
      subject = [subject, sprintf(' (host %s)', gethostname)];
    end
    sendmailblat(subject, [state, sprintf('\n'), str]);
  end
end


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function varargout = saveoptimizationstate(...
  paramDefCellInput, paramDefCell, parameterDimVector, optimInfo, bestval, bestmem, bestvalhist, ...
  bestmemhist, valstddevhist, paramstddevhist, pop, val, startTime, state, DEParams, allval, ...
  allmem, objFctName, objFctHandle, objFctSettings, objFctParams, emailParams, ...
  forceFileNameDisplay, forceSaveFile) %#ok

persistent resultFileName nextSaveTime %#ok

if nargin == 0
  if nargout == 0
    % initialization
    nextSaveTime   = NaN;
    resultFileName = '';
  else
    % return resultFileName
    varargout = {resultFileName};
  end
  return
end

% only save after a certain period of time
fileSavePeriod = 60; % in seconds
if isnan(nextSaveTime)
  nextSaveTime = mbtime + fileSavePeriod;
end

if forceSaveFile || mbtime - nextSaveTime >= 0
  nextSaveTime = mbtime + fileSavePeriod;
  
  D = size(paramDefCell, 1);
  hostname = gethostname;
  
  % save all interesing values in a structure using more meaningful variable names
  optimResult.info                     = optimInfo;
  optimResult.state                    = state;
  optimResult.startTime                = datestr(mbdatevec(startTime), 31);
  optimResult.startClock               = mbdatevec(startTime);
  optimResult.currentTime              = datestr(clock, 31);
  optimResult.DEParams                 = DEParams;
  optimResult.paramDefCellInput        = paramDefCellInput;
  optimResult.paramDefCell             = paramDefCell;
  optimResult.parameterDimVector       = parameterDimVector;
  optimResult.hostname                 = hostname;
  optimResult.bestMember               = bestmem'; % note: transposed!!
  optimResult.bestFctParams            = objFctParams; % to be modified below
  optimResult.objFctParams             = objFctParams;
  optimResult.objFctHandle             = objFctHandle;
  optimResult.objFctSettings           = objFctSettings;
  optimResult.boundaryValuesReached    = zeros(D,1); % to be overwritten below
  optimResult.bestEvaluationValue      = bestval;
  optimResult.bestMemberHistory        = bestmemhist;
  optimResult.bestValueHistory         = bestvalhist;
  optimResult.costValueStdDevHistory   = valstddevhist;
  optimResult.parameterStdDevHistory   = paramstddevhist;
  optimResult.currentPopulation        = pop'; % note: transposed!!
  optimResult.currentCostValues        = val;
  optimResult.allEvaluationValues      = allval;
  optimResult.allTestedMembers         = allmem;
  optimResult.emailParams              = emailParams;
  optimResult.fileFormatVersion        = 1.0; % modify check accordingly!
  
  if ~isempty(bestmem)
    
    % save quantized version of bestmem
    [ignore, bestmemQuantized] = evaluateParameterContraints(...
      [], paramDefCell, parameterDimVector, bestmem); %#ok
    optimResult.bestMemberQuantized = bestmemQuantized';
    
    % overwrite values in bestFctParams with best member
    if strcmp(paramDefCell{1,1}, '_1')
      % why was that?? optimResult = rmfield(optimResult, 'objFctParams');
    else
      parNr = 1;
      while parNr <= D
        index = parNr : (parNr + parameterDimVector(parNr) - 1);
        optimResult.bestFctParams.(getparametername(parNr, 2)) = bestmemQuantized(index);
        parNr = parNr + parameterDimVector(parNr);
      end
    end
    
    % check which boundard values are reached
    for parNr = 1:D
      optimResult.boundaryValuesReached(parNr) = ...
          any(bestmemQuantized(parNr) == paramDefCell{parNr,2});
    end
  end
  
  % get file number to avoid overwriting old results
  if isempty(resultFileName)
    
    fileName = sprintf('%s_lastresultnumber.mat', objFctName);
    if exist('./data', 'dir')
      fileName = ['data/', fileName];
    end
    
    % save current result file number
    sem = setfilesemaphore(fileName, 'set always');
    if existfile(fileName)
      load(fileName);
      resultFileNr = mod(resultFileNr, 99) + 1; %#ok
    else
      resultFileNr = 1;
    end
    save(fileName, 'resultFileNr');
    removefilesemaphore(sem);
    
    % build file name
    resultFileName = sprintf('%s_result_%s_%02d.mat', objFctName, hostname, resultFileNr);
    if exist('./data', 'dir')
      resultFileName = ['data/', resultFileName];
    end
    forceFileNameDisplay = true;
  end
  
  if forceFileNameDisplay
    fprintf('Results are saved in file %s.\n', resultFileName);
  end
  
  % save data
  sem = setfilesemaphore(resultFileName, 'set always');
  save(resultFileName, 'optimResult');
  removefilesemaphore(sem);
  
  % the following code is deactivated, as it uses a Perl script and an
  % external FTP program to upload the current results to a server. Contact
  % me if you are interested in this script.
  %
  % try %#ok
  %   % put file to server
  %   % (this is a file access that is not protected by a semaphore, but
  %   % different Matlab processes use different result file names)
  %   system(sprintf('start /B putfiletoserver.pl %s', resultFileName));
  % end
  
end % if forceSaveFile || mbtime - nextSaveTime >= 0


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function displaybestmember(...
  paramDefCell, parameterDimVector, bestval, bestmem, allval, initval, initmem, ...
  forceParameterDisplay, state, optimInfo, sendEmail, playSound)

persistent lastbestmem lastSoundTime lastEmailTime lastSubject lastStr
persistent maxNameLength hostname username

minTimeBetweenEmails = 30; % avoid sending many E-mails shortly after another

D = size(paramDefCell, 1);

if nargin == 1
  % initialize values
  lastbestmem   = NaN;
  lastEmailTime = -inf;
  lastSoundTime = mbtime;
  hostname = gethostname;
  username = getusername;

  % get maximum name length for proper display
  maxNameLength = 0;
  for parNr = 1:D
    maxNameLength = max(maxNameLength, length(getparametername(parNr, 1)));
  end
  return
end

% display current best member if it has changed or if display is forced
if ~any(isnan(lastbestmem)) && any(size(bestmem) ~= size(lastbestmem))
  error('Internal error: bestmem and lastbestmem are of different size!');
end
if any(bestmem ~= lastbestmem) || forceParameterDisplay
  sendEmailThisTime = 1;
  lastbestmem = bestmem;

  % display state
  str = sprintf('%s\n', state);

  % get quantized parameter vector for display
  [ignore, bestmem] = ...
      evaluateParameterContraints([], paramDefCell, parameterDimVector, bestmem); %#ok

  switch [username '@' hostname]
    case 'Markus@Edison'
      prefixString = 'param.';
    otherwise
      prefixString = '';
  end
  str = [str, sprintf('Best member:\n')];
  if all(bestmem == initmem) && isempty(strfind(state, 'Initial'))
    str = [str(1:end-2), sprintf(' (same as initial member):\n')];
  end
  for parNr=1:D
    if any(bestmem(parNr) == paramDefCell{parNr, 2});
      markStr = '% (boundary value)';
    else
      markStr = '';
    end
    if strcmp(paramDefCell{1,1}, '_1')
      str = [str, sprintf('%10g; %s\n', bestmem(parNr), markStr)]; %#ok
    else
      parameterName = getparametername(parNr, 1);
      str = [str, sprintf('%s%s = %g; %s\n', prefixString, [ parameterName, ...
                          repmat(' ', 1, maxNameLength - length(parameterName))], ...
                          bestmem(parNr), markStr)]; %#ok
    end
  end
  if bestval >= 1e-5
    str = [str, sprintf('Evaluation value: %2.6f\n', bestval)]; % always print zeros
  else
    str = [str, sprintf('Evaluation value: %2.6g\n', bestval)]; % use exponential notation for small values
  end
  if (bestval == initval) && (isempty(strfind(state, 'Initial')))
    str = [str(1:end-1), sprintf(' (same as initial value)\n')];
  end

  if ~isempty(allval)
    sameEvaluationValue = length(find(allval == bestval));
    if sameEvaluationValue > 1
      str = [str, sprintf('Number of vectors with same evaluation value: %d\n', ...
                          sameEvaluationValue)];
    end
  end

  % display information
  disp(str);

  % play sound
  if playSound && ~isempty(lastSoundTime) && mbtime - lastSoundTime > 60
    [x, fs, bits] = wavread('applause.wav');
    soundsc(x, fs, bits);
    pause(length(x) / fs + 1);
    lastSoundTime = mbtime;
  end
else
  sendEmailThisTime = 0;
end

if ~sendEmail
  return
end

% send E-mail notification
if sendEmailThisTime
  % build subject and body
  if bestval >= 1e-5
    formatString = '%2.6f'; % always print zeros
  else
    formatString = '%2.6g'; % use exponential notation for small values
  end
  if forceParameterDisplay
    if ~isempty(strfind(lower(state), 'initial'))
      subject = sprintf(sprintf('Initial eval. value: %s', formatString), bestval);
    else
      subject = sprintf(sprintf('Best eval. value: %s', formatString), bestval);
    end
  else
    subject = sprintf(sprintf('New best eval. value: %s', formatString), bestval);
  end
  if isfield(optimInfo, 'title')
    subject = [subject, sprintf(' (%s, host %s)', optimInfo.title, gethostname)];
  else
    subject = [subject, sprintf(' (host %s)', gethostname)];
  end

  if mbtime - lastEmailTime < minTimeBetweenEmails
    % do not send now, save data for sending later
    lastSubject       = subject;
    lastStr           = str;
    sendEmailThisTime = 0;
  end

elseif ~isempty(lastSubject) && mbtime - lastEmailTime >= minTimeBetweenEmails
  % restore data that was not sent until now
  subject           = lastSubject;
  str               = lastStr;
  sendEmailThisTime = 1;
end

if sendEmailThisTime
  sendmailblat(subject, str);
  lastEmailTime = mbtime;
  lastSubject   = [];
  lastStr       = [];
end


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function [objFctParams, paramVec, paramVec2] = evaluateParameterContraints(...
  objFctParams, paramDefCell,  parameterDimVector, paramVec)

paramVec2 = paramVec; % paramVec2: not quantized

for parNr = 1:length(paramVec)
  % hard bound constraint
  parBounds = paramDefCell{parNr, 2};
  paramVec (parNr) = min(max(paramVec(parNr), parBounds(1)), parBounds(2));
  paramVec2(parNr) = paramVec(parNr);

  % parameter quantization
  minQuantization = 1e-14;
  parGrid = paramDefCell{parNr, 3};
  
  % quantize with at least some value larger eps, see also checkinputs
  parGrid = max(parGrid, minQuantization); 
  paramVec(parNr) = parGrid * ...
      round((paramVec(parNr) - parBounds(1)) / parGrid) + parBounds(1);
end

% set parameter vector in objFctParams (always use quantized value here!)
if ~strcmp(paramDefCell{1,1}, '_1')
  parNr = 1;
  while parNr <= length(paramVec)
    index = parNr:parNr+parameterDimVector(parNr)-1;
    objFctParams.(getparametername(parNr,2)) = paramVec(index)';
    parNr = parNr + parameterDimVector(parNr);
  end
end


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function generatefilesforslaveprocess(...
  objFctHandle, objFctParams, objFctSettings, paramDefCell, parameterDimVector, ...
  pop, allmem, iterationNr, saveHistory, slaveFileDir, validChkHandle)

if ~exist(slaveFileDir, 'dir')
  return
end

% remove all existing slave files
existingSlaveFiles = findfiles(slaveFileDir, 'iteration_*_member_*_*.mat', 'nonrecursive');
deletewithsemaphores(existingSlaveFiles);

% build slave file name
slaveFileNameTemplate = ...
    concatpath(slaveFileDir, sprintf('iteration_%02d_member_XX_parameters.mat', iterationNr));

% generate new slave files
NP = size(pop,1);
if saveHistory
  allmem = [allmem, nan(size(pop,2), NP)];
else
  allmem = nan(size(pop,2), NP);
end
nrOfCols = size(allmem,2);

for memberNr = NP:-1:1
  testmem = pop(memberNr,:);

  % get constrained parameter vector
  [objFctParams, testmem] = evaluateParameterContraints(...
    objFctParams, paramDefCell, parameterDimVector, testmem); %#ok

  if ~paramvecvalidity(paramDefCell, objFctSettings, objFctParams, testmem, validChkHandle)
    % parameter vector invalid
    continue
  end

  % check if the current parameter vector was tested before
  index = find(all(abs(allmem - repmat(testmem', 1, nrOfCols)) < eps, 1));

  if length(index) > 1
    disp('Warning: More than one equal test vector in allmem (internal error?).');
  elseif ~isempty(index)
    continue
  end

  % save testmem in allmem, so that no two files with the same parameters are saved
  allmem(:,nrOfCols-memberNr+1) = testmem';

  % build cell array of function arguments
  if strcmp(paramDefCell{1,1}, '_1')
    % pass parameters as vector
    if iscell(objFctSettings)
      argumentCell = [objFctSettings, {testmem}];
    else
      argumentCell = {objFctSettings,  testmem};
    end
  else
    % pass parameters as structure objFctParams
    if iscell(objFctSettings)
      argumentCell = [objFctSettings, {objFctParams}];
    else
      argumentCell = {objFctSettings,  objFctParams};
    end
  end

  % save file
  memberNrString = sprintf(sprintf('%%0%dd', ceil(log10(NP+1))), memberNr);
  slaveFileName = strrep(slaveFileNameTemplate, 'XX', memberNrString);

  % save slave file
  sem = setfilesemaphore(slaveFileName, 'set always');
  objFctHandle; %#ok
  argumentCell; %#ok
  save(slaveFileName, 'objFctHandle', 'argumentCell');
  removefilesemaphore(sem);
end


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function valid = paramvecvalidity(...
  paramDefCell, objFctSettings, objFctParams, testmem, validChkHandle)

if strcmp(paramDefCell{1,1}, '_1')
  % pass parameters as vector
  if iscell(objFctSettings)
    valid = validChkHandle(objFctSettings{:}, testmem');
  else
    valid = validChkHandle(objFctSettings,    testmem');
  end
else
  % pass parameters as structure objFctParams
  if iscell(objFctSettings)
    valid = validChkHandle(objFctSettings{:}, objFctParams);
  else
    valid = validChkHandle(objFctSettings,    objFctParams);
  end
end

if ~isscalar(valid) || (~isnumeric(valid) && ~islogical(valid)) || ...
    ((abs(valid) > 1e-6) && (abs(valid - 1.0) > 1e-6))
  error('Function %s must return scalar value 0 or 1.', func2str(validChkHandle));
end


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function [testval, testmem, nfeval, allval, allmem] = computeevaluationvalue(...
  testmem, nfeval, timeOver, objFctParams, paramDefCell, parameterDimVector, objFctSettings, ...
  objFctHandle, saveHistory, allval, allmem, iterationNr, memberNr, NP, slaveFileDir, ...
  maxMasterEvals, validChkHandle, XVmin, XVmax)

persistent optParVector nrOfMasterEvaluations lastIterationNr

pauseTime    = 0.1;
maxPauseTime = 1;

pauseTimeSum = 0.0;
warningDisplayed = false;

if nargin == 0
  lastIterationNr       = NaN;
  nrOfMasterEvaluations = 0;
  return
end

% get constrained parameter vector
[objFctParams, testmem, testmem2] = evaluateParameterContraints(...
  objFctParams, paramDefCell, parameterDimVector, testmem);

% check if current parameter vector is valid
if ~paramvecvalidity(paramDefCell, objFctSettings, objFctParams, testmem, validChkHandle)
  testval = NaN;
  
  % write non-quantized value into population
  testmem = testmem2;
  return
end

% check if current parameter vector was tested before
if saveHistory && ~isempty(allmem)
  allmemIndex = find(all(abs(allmem - repmat(testmem', 1, size(allmem, 2))) < eps, 1));
  if length(allmemIndex) > 1
    disp('Warning: More than one equal test vector in allmem (internal error?).');
    allmemIndex = allmemIndex(1);
  end
else
  allmemIndex = [];
end

if ~isempty(allmemIndex)
  % parameter vector was tested before
  testval      = allval(allmemIndex);
  nfeval.saved = nfeval.saved + 1;
else
  % parameter vector was not tested before, compute evaluation value or
  % read from slave
  
  % build slave file name
  if ~exist(slaveFileDir, 'dir')
    slaveFileDir = '';
  end
  if lastIterationNr ~= iterationNr
    lastIterationNr = iterationNr;
    nrOfMasterEvaluations = 0;
  end
  if ~isempty(slaveFileDir)
    memberNrString = sprintf(sprintf('%%0%dd', ceil(log10(NP+1))), memberNr);
    slaveFileName = concatpath(slaveFileDir, sprintf(...
      'iteration_%02d_member_%s_result.mat', iterationNr, memberNrString));
    
    % remove slave parameter file if existing
    if nrOfMasterEvaluations < maxMasterEvals
      slaveParameterFileName = strrep(slaveFileName, 'result', 'parameters');
      deletewithsemaphores(slaveParameterFileName);
    end
  end
  
  if ~isempty(objFctHandle)
    testval = [];
    
    % check if the current parameter vector was tested before by slave process
    if ~isempty(slaveFileDir)
      while 1
        sem = setfilesemaphore(slaveFileName, 'set if existing');
        if existfile(slaveFileName)
          load(slaveFileName, 'testval');
          mbdelete(slaveFileName, 0);
        end
        removefilesemaphore(sem);
        
        if ~isempty(testval)
          % result of slave process was loaded
          nfeval.overall = nfeval.overall + 1;
          nfeval.slave   = nfeval.slave   + 1;
          break
        end
        if nrOfMasterEvaluations < maxMasterEvals
          % master will evaluate current member
          break
        else
          % Wait until member was evaluated by slave.
          % Caution! If any of the slave processes is interrupted, this loop will never be left!! 
          % Limiting the number of master evaluations is not safe!!
          pause(pauseTime);
          pauseTimeSum = pauseTimeSum + pauseTime;
          pauseTime = min(2 * pauseTime, maxPauseTime);
          
          if (warningDisplayed == false) && (pauseTimeSum > 30)
            disp(' ');
            disp(textwrap2(sprintf([...
              'Master is waiting for slave process because given maximum number of master ', ...
              'evaluations (maxMasterEvals = %d) was reached.'], maxMasterEvals)));
            disp(textwrap2(sprintf([...
              'Caution!!! Limiting the maximum number of master evaluations is not safe, the ', ...
              'optimization can get stuck if any slave process gets interrupted!'])));
            warningDisplayed = true;
          end

        end
      end
    end
    
    % evaluate objective function
    if isempty(testval) && (nrOfMasterEvaluations < maxMasterEvals) && ~timeOver
      
      % run function
      if strcmp(paramDefCell{1,1}, '_1')
        % pass parameters as vector
        if iscell(objFctSettings)
          testval = objFctHandle(objFctSettings{:}, testmem');
        else
          testval = objFctHandle(objFctSettings,    testmem');
        end
      else
        % pass parameters as structure objFctParams
        if iscell(objFctSettings)
          testval = objFctHandle(objFctSettings{:}, objFctParams);
        else
          testval = objFctHandle(objFctSettings,    objFctParams);
        end
      end
      nrOfMasterEvaluations = nrOfMasterEvaluations + 1;
      nfeval.overall = nfeval.overall + 1;
      
      % check returned value
      if isempty(testval)
        error('Objective function returned empty evaluation value!');
      elseif ~isscalar(testval)
        error('Objective function returned vector as evaluation value!');
      end
    end
    
  else
    
    % compute distance to randomly chosen vector for testing
    if isempty(optParVector)
      optParVector = XVmin + rand(1, length(XVmin)) .* (XVmax - XVmin);
    end
    testval = sqrt(sum(testmem - optParVector).^2);
    pause(0.2);
    
  end % if ~isempty(objFctHandle)
  
  
  if ~isempty(testval)
    % save tested vector and resulting cost value
    if saveHistory
      allmem(:,end+1) = testmem';
      allval  (end+1) = testval;
    end
  else
    testval = NaN;
  end
end % if ~isempty(allmemIndex)

% write non-quantized value into population
testmem = testmem2;

