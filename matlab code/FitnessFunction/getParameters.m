function [input] = getParameters(scenarioName, modelPath)

    input = -1;
    
    confScenarioPath = strcat(modelPath,filesep,'scenarios',filesep);
    confScenarioPath = strcat(confScenarioPath, scenarioName, filesep,'configuration.txt');
    fileID = fopen(confScenarioPath,'r');
    
    if(fileID == -1)
        disp(stract('The configuration file of scenario ',scenarioName,' has not been found'));
         fclose(fileID);
        return;
    end
    
    %{
    Read line-by-line the content of the file until the EOF,
    then close the file
    %}
    
    while (~feof(fileID))
           temp = textscan(fileID, '%s%f', 'Delimiter', '=');
   %  if((isnan(temp{1,2}(1,1))))
        % disp(temp{1,2}(1,1)) %DEBUG
   %  end
    end

    fclose(fileID);

    %%Filtering the content of the ini file deleting the NaN cells
    ind = find(isnan(temp{1,2}));

    temp{1}(ind) = [];
    temp{2}(ind) = [];
    inVar = temp{1};

	%%The space in the variables names are trimmed
    for i=1:length(inVar)
        inVar{i,1}= strtrim(inVar{i,1});
    end

    inVal = temp{2};
    input = [inVar, num2cell(inVal)];
    
end
