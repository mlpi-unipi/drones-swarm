function [ffIndex] = startSimulation(settings, params)

    %%
    %%Giving in input the simulations parameters and the paths, this
    %%function returns the input the output results of fitness function.
    [pathNetlogo, modelPath, modelFileName] = getEnvPaths();
    scenarioName = settings{1,1};
    nRepetitions = settings{1,2};
  
    %%
    %%The environment is setup, i.e. a copy of the source file, scenario
    %%and the configuration file are made
    paramsPathes.pathNetlogo = pathNetlogo;
    paramsPathes.modelPath = modelPath;
    paramsPathes.modelFileName = modelFileName;
    paramsPathes.tmpSimPath = setupSimulationEnv(scenarioName, paramsPathes);
    
    %%
    %%This function returns the Netlogo output
    output = launchNetLogo(scenarioName, nRepetitions, params, paramsPathes);
    
    %%
    %%The statistics are pointed out
    output = statistics(output);
    output = getEvaluationParams(output, nRepetitions);
    ffIndex = getFitnessValue(params.simulationTime, output);
    %%ffIndex = cell2mat(output(1,2)); 
end