A = imread('woman','gif');
im_input=double(A)/255; % normailize the image
figure(1);
imshow(im_input); % display the image
title('Original Image');  

bs=4; % Block Size (4x4)
nob=512*512/16 % 

% convert an 512x512 image to a data matrix 
% data matrix is 16xnob;
% each row vector is a data vector
data_mat=im_to_data(im_input); 
% Perform k-means with the maximum iteration is 200
% k=256
% Afterwords, indx is an array to store cluster index of each data vector
% codevec is 16xk array. Each row is a codevector

k=512 % number of codevectors
[indx codevec]=kmeans(data_mat,k,'Display','iter','Maxiter',200);

% reconstruct the data matrix 
quan_data=codevec(indx,:);

% convert data matrix to an image 
quan_im=data_to_im(quan_data);

% compute the MSE
format long
mse=sum(sum((quan_im-im_input).^2))/(512*512)

% display the image
figure(2)
imshow(quan_im);
title('Reconstucted Image');













