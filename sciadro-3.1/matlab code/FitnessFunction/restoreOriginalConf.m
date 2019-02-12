function [res] = restoreOriginalConf(scenarioName)
%This function closes all file and restore the original configuration file
%present in the old files directory.
    
    fclose('all');
    [a, modelPath, c] = getEnvPaths();
    scenarioPath = strcat(modelPath,'scenarios',filesep,scenarioName,filesep);
    oldFilesPath = strcat(scenarioPath, 'old files',filesep);

    %%Return 1 if all these operation go good, otherwise 0.
    res = copyfile(strcat(oldFilesPath,'originalConf.txt'),strcat(scenarioPath,'configuration.txt'));
    if(res == 1)
        disp('Original configuration restored correctly')
    else
        disp('Original configuration not restored correctly')
    
    end
end

