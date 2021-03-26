RGB = imread('image.png');
RGB = imresize(RGB,[100 100]);

I = medfilt2(rgb2gray(RGB));
imshow(I);

fileID = fopen('image_med.coe','w');
fprintf(fileID, "memory_initialization_radix=16;\nmemory_initialization_vector=\n");
for i =1:length(I)
    for j=1:length(I)
    	fprintf(fileID,"%02x,\n", I(i,j));
    end
end
fclose(fileID);