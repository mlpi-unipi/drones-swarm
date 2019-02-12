function dotProcessing(PathFileToRead,step)
    d=dir(PathFileToRead);
    sz1=size(d,1);
 
    % Import the rawData from the pgm files
    passo=step+1;
    for index=3:sz1
        fileToRead="target_frames/";
        fileToRead=strcat(fileToRead,d(index).name);
        rawData = importdata(fileToRead);
  
    
        %Getting dimension of the matrix
        [rows, columns]=size(rawData);
        
        
        for i=1:rows
           if(mod(i,passo)~=0)
                for j=1:columns
                    rawData(i,j)=0;
                end
           end
        end
        
        for j=1:columns
           if(mod(j,passo)~=0)
            for i=1:rows
                rawData(i,j)=0;
            end
           end
        end
        
        fileToRead=strtok(fileToRead,'.');
        fileToRead=strcat(fileToRead,'.txt');
        fid = fopen(fileToRead,'w');
        fclose(fid);
        dlmwrite(fileToRead,rawData,'delimiter',' ')

    end
end