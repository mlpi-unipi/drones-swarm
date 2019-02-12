function exportImageTargetCoordinates(PathFileToRead)
    d=dir(PathFileToRead);
    d.name
    sz1=size(d,1);
 
    % Import the rawData from the pgm files
    for index=3:sz1
        fileToRead="target_frames/";
        fileToRead=strcat(fileToRead,d(index).name);
        
        rawData = importdata(fileToRead);
        rawData = rawData';
    
        %Getting dimension of the matrix
        [rows, columns]=size(rawData);

        %Variables declaration
        x=[];
        y=[];
        c=[];
        A=[];
    
        %looking inside .pgm file for positive concentration value.
        %I'm going to save (x,y) coordinate and the concentration value
    
        for i = 1:rows
            for j = 1:columns
               if(rawData(i,j)~=0)
                   %[x,y,c;]=[i,j,rawData(i,j)];
                   x=[x;i];
                   y=[y;j];
                   c=[c;rawData(i,j)];
               end
            end
        end
    
        %%
        %%Since Netlogo has the origin in the center of the map and the image
        %%has the origin in the top left of the map, a conversion is needed.

        x = x - ceil(rows/2);
        y = -y + ceil(columns/2);

        A=[int32(x) int32(y) c];

        %Creating output files name
        filePath="output/";
        fileName=d(index).name;
        fileName=strtok(fileName,'.'); 
        fileName=strcat(filePath,fileName);
        fileName=strcat(fileName,'.txt');
        
        %%
        %The coordinations are written in append in the output.txt file
        fid = fopen(fileName,'w');
        %fprintf(fid,'#Targets\n');
        fclose(fid);
        dlmwrite(fileName,A,'-append','delimiter',' ');
    end
end