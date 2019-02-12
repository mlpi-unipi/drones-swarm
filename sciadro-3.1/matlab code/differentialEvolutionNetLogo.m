function differentialEvolutionNetLogo(scenarioName, nRepetitions)

    optimInfo.title = 'Netlogo Simulation';
    addpath('FitnessFunction','DE');
    
    %%
    %Get the pathes from txt file 
    [pathNetlogo, modelPath, modelFileName] = getEnvPaths();
  
    
    if (ismember(-1,pathNetlogo))
        return
    end
    
    if (ismember(-1,modelPath))
        return
    end
    
    if (ismember(-1,modelFileName))
        return
    end
    
    %%Get the parameters from cofinguration file
    inputPars = getParameters(scenarioName,modelPath);
   
    if(length(inputPars) == 1)
        return
    end
    
    %disp(inputPars)%%DEBUG
    
	%% Specify objective function
	objFctHandle=@startSimulation;
    
	%% define parameter names, ranges and quantization:

    % 1. column: parameter names
    % 2. column: parameter ranges
    % 3. column: parameter quantizations
    % 4. column: initial values (optional)

    %%C stands for Constant
    %%T stands for Tunable

    
paramDefCell = {
    %%Simulation parameters (C)
    inputPars{1,1}, [0 0], 0 %%Simulation Time
	inputPars{2,1}, [3 3], 0 %%strategy.
    
    %%Drone parameters (C)
    inputPars{3,1}, [0.2 0.2], 0 %%Drone radius
    inputPars{4,1}, [8.5 8.5], 0%%Maximum speed
    inputPars{5,1}, [2 2], 0%%Cruising speed
    inputPars{6,1}, [2 2], 0%%Acceleration
    inputPars{7,1}, [-2 -2], 0%%Deceleration
    inputPars{8,1}, [2.6 2.6], 0%%Maximum angular speed
    inputPars{9,1}, [7 7], 0%%Angular acc
    inputPars{10,1}, [-7 -7], 0%%Angular dec
    inputPars{11,1}, [24 24], 0%%Endurance
    inputPars{12,1}, [2.5 2.5], 0%%Sensing radius
    inputPars{13,1}, [360 360], 0%%sensing angle
    inputPars{14,1}, [5 5], 0%%sensing base
    inputPars{15,1}, [4 4], 0%%sensing height
    
    %%Collisions avoidance parameters (C)
    inputPars{16,1}, [4 4], 0%%Reachable radius
    inputPars{17,1}, [360 360], 0%%Reachable angle
    inputPars{18,1}, [6 6], 0 %obstacles vision
    inputPars{19,1}, [60 60], 0%%Sight angle Max
    inputPars{20,1}, [20 20], 0%%Gap angle
    
    %Pheromone parameters (T)
    inputPars{21,1}, [1 13], 1 %%radiusTop
    inputPars{22,1}, [13 19], 1%%RadiusDown
    inputPars{23,1}, [0.01 0.2], 0.01%%EvaporationRate
    inputPars{24,1}, [1 100], 1 %%Olfaction
    
    %%Flocking parameters (T)
    %%(Ignored when the flocking strategy is not used)
    inputPars{25,1}, [15 45], 3%%flockAngle
    inputPars{26,1}, [5 15], 1%%wiggle var
     
     %%Separate params
    inputPars{27,1}, [6 16], 1%%Radius separate
    inputPars{28,1}, [30 45], 3%%Max separate turn
     
    %%Align  parameters
    inputPars{29,1}, [16 22], 1%%Radius Align
    inputPars{30,1}, [30 45], 3%%Max align turn
    
    %%Cohere parameters
    inputPars{31,1}, [18 26], 1%%Cohere radius
    inputPars{32,1}, [15 30], 3 %Max cohere turn
    
};

    %%
    %The default parameters are set from file
    objFctParams.simulationTime  =  inputPars{1,2};
    objFctParams.strategy  =  inputPars{2,2};
    objFctParams.droneRadius  =  inputPars{3,2};
    objFctParams.speedMax    =  inputPars{4,2};
    objFctParams.cruisingSpeed    =  inputPars{5,2};
    objFctParams.acceleration    =  inputPars{6,2};
    objFctParams.deceleration   =  inputPars{7,2};
    objFctParams.angularVelMax   =  inputPars{8,2};
    objFctParams.angularAcc   =  inputPars{9,2};
    objFctParams.angularDec   =  inputPars{10,2};
    objFctParams.endurance  =  inputPars{11,2};
	objFctParams.sensingRadius  =  inputPars{12,2};
	objFctParams.sensingAngle  =  inputPars{13,2};
    objFctParams.sensingBase  =  inputPars{14,2};
    objFctParams.sensingHeight  =  inputPars{15,2};
    
	objFctParams.reachableRadius   =  inputPars{16,2};
	objFctParams.reachableAngle   =  inputPars{17,2};
	objFctParams.collisionVision   =  inputPars{18,2};
	objFctParams.sightAngleMax  =  inputPars{19,2};
    objFctParams.gapAngle  =  inputPars{20,2};
    
    objFctParams.radiusTop   =  inputPars{21,2};
	objFctParams.radiusDown   =  inputPars{22,2};
	objFctParams.evapRate   =  inputPars{23,2};
	objFctParams.olfaction   =  inputPars{24,2};
    
    objFctParams.flockAngle  = inputPars{25,2};
    objFctParams.wiggleVar  = inputPars{26,2};
    
    objFctParams.radiusSeparate  = inputPars{27,2};
    objFctParams.maxSeparateTurn    = inputPars{28,2};
    
    objFctParams.radiusAlign   = inputPars{29,2};
    objFctParams.maxAlignTurn   = inputPars{30,2};
    
    objFctParams.radiusCohere   = inputPars{31,2};
    objFctParams.maxCohereTurn  = inputPars{32,2};
    
    %%
    % Set two additional function parameters, i.e. scenarioName and
    % nRepetitions
    FctSettings = {scenarioName, nRepetitions};
    objFctSettings = {FctSettings};

    %%
    % get default DE parameters
    DEParams = getdefaultparams;

    %%
    % set number of population members (often 10*D is suggested) 
    DEParams.NP = 40;
    
    %%
    % set CR = [0, 1] (crossover rate, default 0.7) and F = [0, 2] (differential weight, default 0.8)
    DEParams.CR = 0.5;
    DEParams.F = 0.7;

    %%
    % do not use slave process here
    DEParams.feedSlaveProc = 0;
    
    % set times
    DEParams.maxiter  = 20;
    DEParams.maxtime  = Inf; % in seconds
    DEParams.maxclock = [];

    %%
    % set display options
    DEParams.infoIterations = 1;
    DEParams.infoPeriod  = 300; % in seconds
    DEParams.displayResults = false;
    DEParams.playSound = false;

    %%
    %A subfunction to check parameter vectors for validity
    DEParams.validChkHandle = @CheckParams;

    %%
    % do not send E-mails
    emailParams = [];

    %%
    % set random state in order to always use the same population members here
    setrandomseed(1);

    %%
    % start differential evolution
    [bestmem, bestval, bestFctParams, nrOfIterations, resultFileName] = differentialevolution(...
	DEParams, paramDefCell, objFctHandle, objFctSettings, objFctParams, emailParams, optimInfo); %#ok

    %%
    disp(' ');
    disp('Best parameter set returned by function differentialevolution:');
    disp(bestFctParams);
    
end