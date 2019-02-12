function exportImageObstacleCoordinates(fileToRead)
    % Import the rawData from the pgm file
    rawData = importdata(fileToRead);
    rawData = rawData';
    
    %Getting dimension of the matrix
    [rows, columns]=size(rawData);

    %141 corresponds to obstacle color, which is grey (5) in netLogo
    %Getting coordinates for 141

    [x,y] = find((rawData)==141); 
    
    %%
    %%Since Netlogo has the origin in the center of the map and the image
    %%has the origin in the top left of the map, a conversion is needed.
   
    x = x - ceil(rows/2);
    y = -y + ceil(columns/2);
    
    % Creating output file name
    fileName=strtok(fileToRead,'.');
    fileName=strcat(fileName,'.txt');
    
    %The coordinations are written in append in the output file
    fid = fopen(fileName,'w');
    %fprintf(fid,'#Obstacles\n');
    fclose(fid);
    dlmwrite(fileName,[x y],'-append','delimiter',' ');
end