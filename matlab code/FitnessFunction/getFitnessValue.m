function [ ff_value ] = getFitnessValue( simulationTime, evaluationParams )
%GETFITNESSVALUE restituisce il valore di fitness
%   La funzione getFitnessValue prende in input la durata della simulazione
%   prefissata e i parametri di valutazione generati dalle simulazioni e
%   restituisce in output il valore di fitness a seconda della funzione di
%   fitness considerata
%% 
% Controlla se la performance deve essere valutata come tempo impiegato per
% rilevare il primo target e in caso affermativo preleva il valore di
% fitness

for j = 1:length(evaluationParams)
    if (strcmp(evaluationParams(j,1), 'targets.detectionTime'))
        if ((cell2mat(evaluationParams(j,2))) > 0)
            ff_value = cell2mat(evaluationParams(j,2));
            return
        end
    end
end

%% 
% Controlla se il parametro prefissato relativo alla durata della
% simulazione è maggiore di zero e in caso positivo calcola il valore di
% fitness

if (simulationTime > 0)
    for i = 1:length(evaluationParams)
        if (strcmp(evaluationParams(i,1), 'targets.averagePercentage'))
            ff_value = (100 - cell2mat(evaluationParams(i,2)));
            % Il valore di fitness considerato è costituito dalla
            % percentuale media di targets non rilevati
            return
        end
    end
end

%% 
% Il valore di fitness di default è rappresentato dal tempo medio impiegato
% per rilevare il 95% dei targets

ff_value = cell2mat(evaluationParams(1,2));



end

