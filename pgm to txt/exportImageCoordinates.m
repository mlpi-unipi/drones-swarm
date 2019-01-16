function exportImageCoordinates(fileToRead)
    % Import the rawData from the pgm file
    rawData = importdata(fileToRead);
    rawData = rawData';
    
    %%
    %63, 255 and 127 represent the gray shadow encoding. They represent
    %red targets, the green targets and the drones, respectively.
    [x1,y1] = find((rawData)==63); 
    [x2,y2] = find((rawData)==255); 
    [x3,y3] = find((rawData)==127); 

    %%
    %%Since Netlogo has the origin in the center of the map and the image
    %%has the origin in the top left of the map, a conversion is needed.
    x=[x1;x2;x3];
    y=[y1;y2;y3];

    x1 = x1 - 100;
    x2 = x2 - 100;
    x3 = x3 - 100;
    
    y1 = -y1 + 100;
    y2 = -y2 + 100;
    y3 = -y3 + 100;
    
    %%
    %The coordinations are written in append in the output.txt file
    fid = fopen('output.txt','w');
    fprintf(fid,'#Shape95%%\n');
    fclose(fid);
    dlmwrite('output.txt',[x1 y1],'-append','delimiter',',');
    
    fid = fopen('output.txt','a');
    fprintf(fid,'#Shape50%%\n');
    fclose(fid); 
    dlmwrite('output.txt',[x2 y2],'-append','delimiter',',');
    
    fid = fopen('output.txt','a');
    fprintf(fid,'#Drones\n');
    fclose(fid);
    dlmwrite('output.txt',[x3 y3],'-append','delimiter',',');

end