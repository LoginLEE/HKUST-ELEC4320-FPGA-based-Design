RGB = imread('image.png');
%imshow(RGB)
I = rgb2gray(RGB);
%imshow(I)
K = (ones(3,3)/9);
I_blur = filter2(K, I);
imshow(uint8(I_blur))

answ=uint32(0);
for i=1:3
   for j=1:3
    answ = answ + uint32(I(i,j));
   end 
end
answ/(uint32(9))