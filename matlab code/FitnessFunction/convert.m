function [converted] = convert(data, numSim)
    %%
    %%This function returns the converted data from number stored in string format
    %%, in number format

    for j=2:numSim+1
        for i=1:length(data)
        
        tmp = str2double(data{i,j});
     
         if(~isnan(tmp))
            data{i,j} = tmp;
         end
        end
    end
    converted = data;
    end