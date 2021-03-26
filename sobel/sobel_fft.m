clear all;
C = rgb2gray(imread('road.bmp'));
C = imresize(C,0.6);
%figure(1);imshow(C);
C = double(C);
%kernel
blur_kernel = fspecial('gaussian', [10 10], 2); %blur
hx = [ 1 2 1]'*[-1 0 1]; %sobel
hy = hx'; %sobel
LPF = ones(3,3);
median_kernel = ones(10,10);
median_kernel = median_kernel/sum(sum(median_kernel));
A=C;
tic
A = conv2Dfft2(A, blur_kernel); %blur
A = sqrt(conv2Dfft2(A, hx).^2+conv2Dfft2(A, hy).^2);%sobel edge detect
B = (A>80); %thresholding
A = B.*A;
%A = conv2Dfft2(A, median_kernel); %blur
toc

%A = filtering2D(A, LPF);

figure(2);imshow(uint8(A))