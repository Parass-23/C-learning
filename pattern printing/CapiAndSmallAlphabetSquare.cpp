#include <iostream> 
using namespace std; 
int main(){ 
int n;
cout<<"enter num  : ";
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
    if(i%2==0) cout<<(char)(j+64)<<" ";
    else cout<<(char)(j+96)<<" ";

    }
    cout<<endl;
}
} 