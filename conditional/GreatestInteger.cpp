#include <iostream>
using namespace std;
int main(){
   int a,b,c;
   cout<<"Enter the first number: ";
   cin>>a;
   cout<<"Enter the second number: ";
   cin>>b;
   cout<<"Enter the third number: ";
   cin>>c;
   // if (a>=b && a>=c) cout<<a<<" is the greatest number."<<endl;
   // else if (b>=a && b>=c) cout<<b<<" is the greatest number."<<endl;
   // else cout<<c<<" is the greatest number."<<endl;
   //----------------------------------------------------------
   // more advanced code for finding the greatest number among three numbers using the nested if else statement\
  
if (a>=b){
       if (a>=c) cout<<a<<" is the greatest number."<<endl;
       else cout<<c<<" is the greatest number."<<endl;
   }
   else{
       if (b>=c) cout<<b<<" is the greatest number."<<endl;
       else cout<<c<<" is the greatest number."<<endl;
   }
}