RGB = imread('image.png');
RGB = imresize(RGB,[100 100]);

fileID = fopen('image_rgb.coe','w');
fprintf(fileID, "memory_initialization_radix=16;\nmemory_initialization_vector=\n");
for i =1:length(RGB)
    for j=1:length(RGB)
    	fprintf(fileID,"%02x%02x%02x,\n", RGB(i,j,1),RGB(i,j,2),RGB(i,j,3));
    end
end
fclose(fileID);
imshow(RGB);