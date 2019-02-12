function [evalParams] = getEvaluationParams(output, nSim)
%%The evaluation parameters are represented by the last three rows in the
%%output matrix
evalParams = [output(3:end,1),output(3:end,nSim+3)];

end