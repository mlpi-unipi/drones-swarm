function [tmpSimPath] = setupSimulationEnv(scenarioName, pathParams)
     %{
    In order to have more simulations in parallel, the same model (.nlogo file)
    is copied in a temporary directory: for each simulation,
    the simulation directory contains a this temporary directory called
    tempSim concatenated PID process(E.g. tempSim9200).
    The scenario and configuration files are copied as well.
    %}
    %% Simulation environment path
    modelPath = pathParams.modelPath; %Where .nlogo main file is located
    modelFileName = pathParams.modelFileName; %%.nlogo filename
    fullModelPath = strcat(modelPath,modelFileName);
    
    %%
    %%Where the scenario and the include are located, respectively
    scenarioPath = strcat(modelPath,'scenarios',filesep,scenarioName); 
    includePath = strcat(modelPath,filesep,'include',filesep);
    
    %%
    %%The directories are created if they don't exist
    pid = int2str(feature('getpid'));
    tempFolderName = strcat('tempSim',pid);
    
    if(exist(strcat(modelPath,'simulation'),'dir')~=7)
        mkdir(modelPath,'simulation');
    end
    
   % disp('Debug') %%DEBUG
    %disp(strcat(modelPath,'Simulation'))  %%DEBUG
    
    simulationPath = strcat(modelPath,'simulation');

    %%Check the existance of the simulation path folder before to create it
    if(exist(strcat(simulationPath,filesep,tempFolderName),'dir')~=7)
        mkdir(simulationPath,tempFolderName);
    end
   
    simulationPath = strcat(simulationPath,filesep,tempFolderName);
   
    %%Copy the model .nlogo file
    copyfile(fullModelPath,simulationPath);
    
     %%Check the existance of the scenarios test path folder before to create it
    if(exist(strcat(simulationPath,filesep,'scenarios'),'dir')~=7)
          mkdir(simulationPath,'scenarios');
    end
    
    tmpScenariosPath = strcat(simulationPath,filesep,'scenarios');
   
    %%Check the existance of the single scenario test path folder before to create it
    if(exist(strcat(tmpScenariosPath,filesep,scenarioName),'dir')~=7)
        
           mkdir(tmpScenariosPath,scenarioName);
    end
    
    tmpResultsPath = strcat(tmpScenariosPath,filesep,scenarioName);
    
    if(exist(strcat(tmpResultsPath,filesep,'results'),'dir')~=7)
        
        mkdir(tmpResultsPath,'results');
    end
    
    %%
    %%The files are copied into simulation temporanery folder
    copyfile(strcat(scenarioPath,filesep,'scenario'),strcat(tmpScenariosPath,filesep,scenarioName));
    copyfile(strcat(scenarioPath,filesep,'configuration.txt'),strcat(tmpScenariosPath,filesep,scenarioName));
    copyfile(includePath,strcat(simulationPath,filesep,'include'));
     tmpSimPath = simulationPath;

end