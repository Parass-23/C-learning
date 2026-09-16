#include <iostream> 
#include<cmath>
using namespace std; 

int main(){ 
int n;
cout<<"enter a num : ";
cin>>n;
int fac =0;
for (int i=1;i<=n;i++){
    if(n%i == 0) {
        fac++;
    }
}
if (fac==1) cout<<"neither prime nor composite";
else if (fac>=3) cout<<"it is a composite number";
else cout<<"it is a prime no";
}