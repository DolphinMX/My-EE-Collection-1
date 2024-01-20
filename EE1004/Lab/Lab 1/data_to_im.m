function re_im=data_to_im(mat_im);


bs=4; % 
nob=512*512/16 % 

re_im=zeros(512,512);
k=1;
for i=1:(512/bs)
  for j=1:(512/bs)
    B0=reshape(mat_im(k,:),[4 4]);
    re_im(bs*(i-1)+1:bs*(i-1)+bs,bs*(j-1)+1:bs*(j-1)+bs)=B0;  
    k=k+1;  
  end
end