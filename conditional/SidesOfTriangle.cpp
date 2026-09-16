#include <iostream>
using namespace std;
int main(){
  int a;
    cout<<"Enter the length of first side of triangle: ";
    cin>>a;
    int b;
    cout<<"Enter the length of second side of triangle: ";
    cin>>b;
    int c;
    cout<<"Enter the length of third side of triangle: ";
    cin>>c;

   if(a+b>c && b+c>a && c+a>b) cout<<"The triangle is valid."<<endl;
   else cout<<"The triangle is not valid."<<endl;
}