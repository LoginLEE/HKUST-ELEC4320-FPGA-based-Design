%%% Please manually delete the last ,

RGB = imread('image.png');
%imshow(RGB)
fileID = fopen('image.coe','w');
fprintf(fileID, "memory_initialization_radix=10;\nmemory_initialization_vector=\n");
for i =1:length(I)
    for j=1:length(I)
    	fprintf(fileID, "%d,\n", I(i,j));%(y,x)
    end
end
fclose(fileID);
