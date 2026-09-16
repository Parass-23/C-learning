#include <iostream> 
using namespace std; 
int main(){ 
int n;
cout<<"enter a num : ";
cin>>n;
int sum=0;
while(n>0){
    n%10;
    sum+=n%10;
    n/10;
}
cout<<sum;
}