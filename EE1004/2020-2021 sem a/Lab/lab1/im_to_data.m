function  mat_im=im_to_data(im512);
bs=4; % 
nob=512*512/16 % 

mat_im=zeros(nob,bs*bs);

k=1;
for i=1:(512/bs)
  for j=1:(512/bs)    
    B0=im512(bs*(i-1)+1:bs*(i-1)+bs,bs*(j-1)+1:bs*(j-1)+bs);  
    mat_im(k,:)=reshape(B0,[16 1]);
  k=k+1;  
  end
  end
