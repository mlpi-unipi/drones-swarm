function writeConfigFile(nameScenario, params, modelPath)
    
    inputPars = struct2cell(params);
    
    fieldNames = fieldnames(params);%%It is a set of cell
    fieldValues = cell2mat(inputPars);
    
    %%A copy of starting file is made
    %%Open the configuration file in the corrisponding folder of the scenario
    scenarioPath = strcat(modelPath,filesep,'scenarios',filesep,nameScenario,filesep);
    confScenarioPath = strcat(scenarioPath, 'configuration.txt');
   
    fileID = fopen(confScenarioPath,'w');
    formatSpec = '%s\r\n';

    nRows = length(inputPars);
    %%The format of parameters in the conf file is the following: ====|> namePar = value
    for row = 1:nRows
        tmp = strcat(fieldNames{row},'=',num2str(fieldValues(row)));
       % disp(tmp)%DEBUG
        fprintf(fileID,formatSpec,tmp);
    end
    fclose(fileID);
end