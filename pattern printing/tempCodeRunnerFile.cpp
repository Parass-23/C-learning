int nsp=n-1,nst=1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=nsp;j++){
        cout<<"  ";
    }
    for(int j=1;j<=nst;j+=1){
        cout<<"* ";
    }
    nsp--;
    nst+=2;
    cout<<endl;