function [ C ] = filtering2D( A, filter )
    sz = size(A);
    fsz= size(filter);
    filter = [filter zeros(fsz(1),sz(2)-fsz(2));...
              zeros(sz(1)-fsz(1),sz(2));...
              ];
           % figure(99);imshow(uint8(filter));
    C = ifft2(fft2(A).*filter);
end

