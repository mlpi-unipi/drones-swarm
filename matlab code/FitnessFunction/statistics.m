function  [results] = statistics(input)
%%
%%The mean and the variance are computed. 
%%They refers to the same simulation repeated a certain number of 
%%iteration (nIterations). 

meanVector = [];
varianceVector = [];

for i=1:length(input)
tmp1 = cell2mat(input(i,2:end));

    if(isnumeric(tmp1)==1)
    	meanVector = [meanVector, mean(tmp1)];
        varianceVector = [varianceVector, var(tmp1)];
    else 
        meanVector = [meanVector, NaN];
        varianceVector = [varianceVector, NaN];
    
    end

end
%%
%%When the mean vector and the variance vector are computed, a zeros column
%%is added and after those two columns,i.e the computed mean vector and 
%%the computed variance vector, respectively.

meanVector = num2cell(meanVector');
varianceVector = num2cell(varianceVector');
%disp(meanVector)
%disp(varianceVector)

results = [input,num2cell(zeros(length(input),1)),meanVector, varianceVector];

end