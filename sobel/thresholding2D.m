function [ C ] = thresholding2D( A , threshold )
sz = size(A);

 for i=1:sz(1)
    for j=1:sz(2)
        if(A(i,j)>threshold)
            C(i,j) = 255;
        else
            C(i,j) = 0;
        end
    end
 end

end

