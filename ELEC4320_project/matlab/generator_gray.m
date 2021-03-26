RGB = imread('image.png');
RGB = imresize(RGB,[100 100]);
imshow(RGB);
I = rgb2gray(RGB);
%Gx = [1 +2 +1; 0 0 0; -1 -2 -1]; Gy = Gx';
%temp_x = conv2(I, Gx, 'same');
%temp_y = conv2(I, Gy, 'same');
%I = sqrt(temp_x.^2 + temp_y.^2);
I = edge(I,'Sobel');
imshow(I);
fileID = fopen('image_gray.coe','w');
fprintf(fileID, "memory_initialization_radix=16;\nmemory_initialization_vector=\n");
for i =1:length(I)
    for j=1:length(I)
        if(I(i,j))
           fprintf(fileID,"%02x,\n", 255);
        else
           fprintf(fileID,"%02x,\n", 0);
        end
    	
    end
end
fclose(fileID);