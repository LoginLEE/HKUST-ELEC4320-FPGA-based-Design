C = rgb2gray(imread('lenna.png'));
f=1;
figure(f);f=f+1;imshow(C);
C= double(C);
hx = [ 1 2 1]'*[-1 0 1];
hy = hx';

for i=1:512
   for j=1:512
   mag(j,i) =0;
   theta(j,i) =0;
   end
end
figure(f);f=f+1;imshow(uint8(abs(fft(C))));
%figure(f);f=f+1;imshow(uint8(imag(fft2(C))));
%gauBlur = [1 2 1;2 4 2;1 2 1];
%gauBlur = gauBlur/sum(sum(gauBlur));
kernel = fspecial('gaussian', [5 5], 3);
C = conv2(C, kernel);
figure(f);f=f+1;imshow(uint8(C));
%x 
% for i=1:512-2
%    for j=1:512-2
%     Gx=(hx(1,3)*C(i+2,j)+hx(2,3)*C(i+2,j+1)+hx(3,3)*C(i+2,j+2))-(hx(1,1)*C(i,j)+hx(2,1)*C(i,j+1)+hx(3,1)*C(i,j+2));
%    %Gx=((2*C(i+2,j+1)+C(i+2,j)+C(i+2,j+2))-(2*C(i,j+1)+C(i,j)+C(i,j+2)));
%    Gy=((2*C(i+1,j+2)+C(i,j+2)+C(i+2,j+2))-(2*C(i+1,j)+C(i,j)+C(i+2,j)));
%    mag(i,j) = sqrt((Gx.^2+Gy.^2));
%    if(mag(i,j)<70)%threshold
%        mag(i,j)=0;
%    end
%    %theta(i,j) = 255*atan(Gy/Gx);
%    end
% end
mag = sqrt(conv2(C, hx).^2+conv2(C, hy).^2);

% for i=1:512
%    for j=1:512
%     if mag(i,j)<100
%         mag(i,j)=0; 
%     else
%         mag(i,j)=255;
%     end
%    end
% end
A=uint8(mag);
figure(f);f=f+1;imshow(cat(3,A,A,A));