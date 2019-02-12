function [results] = launchNetLogo(scenarioName, nRepetitions, params, pathParams)

    
    %%Get the simulation environment path
    pathNetlogo = pathParams.pathNetlogo;
    modelFileName = pathParams.modelFileName;
    simulationPath = pathParams.tmpSimPath;

    %%
    %%Added a space before scenario name and pathNetlogo because
    %%in the script it needs a space character
    scenarioNameScript = [' ' scenarioName]; 
    pathNetlogo = [' ' pathNetlogo];
    
    results = [];
    
    %%
     %{
    The same simulation is repeated numSimulation
    time with different random seeds
    %}
    
    
    for i=1:nRepetitions %%TODO %%To substitute with parfor
        arg = strcat('java -Xmx1024m -Dfile.encoding=UTF-8 -cp ', pathNetlogo,...
        ' org.nlogo.headless.Main --model "', simulationPath ,filesep,modelFileName,...
        '" --experiment ',' ',scenarioNameScript, 'Exp',' --table -');
    
    
    %%
    %%TODO: Handle the possibile errors
    %%
        %%Since that the DE algorithm changes internally the parameters,
        %%they are written on file
       
        %disp(arg)%Debug
        writeConfigFile(scenarioName, params, pathParams.tmpSimPath);
        %disp(arg); %DEBUG
        [val,cmdout] = system(arg);
        
        %disp(cmdout) %DEBUG
        
         %%
        %%The results are parsed
        [varRes,valRes] = parseOutput(cmdout);

        if(i == 1)
            results = varRes; 
        end
        disp('Single repetition output');
        %disp(varRes) %DEBUG
        disp(valRes)% DEBUG %%In order to see the result of each single iteration
        results = [results,valRes];
    end
    %%
        %%The results are converted because they were in String format
    results = convert(results, nRepetitions);
end