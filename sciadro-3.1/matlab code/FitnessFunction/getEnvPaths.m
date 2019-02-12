function  [pathNetlogo, modelPath, modelFileName] = getEnvPaths()
    
    %%
    %%The below txt file is open in order to get the simulation environment path
    fileID = fopen('Environment Paths.txt','r');
    
    pathNetlogo = -1;
    modelPath = -1;
    modelFileName = -1;
    
    if(fileID == -1)%%Check the existance of the file
       disp('Cannot open Environment Paths.txt file');
      return
    end
         %{
    Read line-by-line the content of the file until the EOF,
    then close the file 
  %}
        while (~feof(fileID))
            temp = textscan(fileID, '%s%s', 'Delimiter', '=');
            
            %if((isnan(temp{1,2}(1,1))))
                %disp(temp{1,2}(1,1)) %DEBUG
            % end
            
        end
        
        fclose(fileID);
        
        %varName = temp{1}; %%For debugging reasons
        value = temp{2};
    
        pathNetlogo =value{1,1};
        modelPath = value{2,1};
        modelFileName = value {3,1};    
        
        temp = pathNetlogo(2:end-1);%%The inverted comma are removed
    
        %%
        %%Error handler
        if(exist(temp,'file')~= 2)
            disp('The Netlogo.jar path file either does not exist or is incorrect. Please, check the Enviroinment Paths file');
            return
        end
        
        if(exist(modelPath,'dir')~= 7)
            disp('The model path does not exist. Please, check the Enviroinment Paths file');
            return
        end
    
        if(exist(strcat(modelPath,filesep,modelFileName),'file')~= 2)
            disp('The .nlogo file either does not exist or is incorrect. Please, check the Enviroinment Paths file');
            return
        end
    
end