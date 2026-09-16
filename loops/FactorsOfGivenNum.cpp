#include <iostream> 
using namespace std; 

int main(){ 
int n;
cout<<"enter a num : ";
cin>>n;
int fac=0;
for (int i=1;i<=n;i++){
    if(n%i == 0) {
        fac++;
    }
   
}
    cout<<fac;
}