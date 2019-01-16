function [outVar, outVal] = parseOutput(toBeParsed)

    %%
    %%The text is parsed according to the new line delimiter. 
    temp=textscan(toBeParsed,'%s','Delimiter','\n');
    
    %disp(toBeParsed); % DEBUG
   
    outputSize = size(temp{1});
    %disp(outputSize); %%DEBUG
    
    %%
    %%In some Matlab version the output is 8 rows and in some other is 9
    %%rows. In order to parse correctly the output, is checked how many
    %%rows the output has.
    
    if(outputSize(1) == 9)
        temp{1}(1:end-3) = [];
    end
    
    if(outputSize(1) == 8)
        temp{1}(1:end-2) = [];
    end

    %%
    %On one hand are taken all variables.
    %On the other hand the values are taken.
    temp2 = textscan(temp{1,1}{1,1},'%s','Delimiter','","');
    outVar = temp2{1,1}(~cellfun('isempty',temp2{1,1}));

    temp3 = textscan(temp{1,1}{2,1},'%s','Delimiter','","');
    outVal = temp3{1,1}(~cellfun('isempty',temp3{1,1}));

end