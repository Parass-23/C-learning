#include <iostream> 
using namespace std; 
int main(){ 
   int a;
   cout<<"enter base : ";
   cin>>a;
   int b;
   cout<<"enter exponent : ";
   cin>>b;
   int ans=1;
   for(int i=1;i<=b;i++){
    if(a==1) break;
    else ans*=a;
   }
   if(a==0 and b==0) cout<<"intermediate form";
   else cout<<ans;
}