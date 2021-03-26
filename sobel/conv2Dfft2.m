function [ C ] = conv2Dfft2( A,B )
% 2D Conv by 2D fft
    sz = size(A);
    C = ifft2(fft2(A).*fft2(B, sz(1),sz(2))); %zero padding
end

