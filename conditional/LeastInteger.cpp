#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the first number: ";
    cin>>a;
    int b;
    cout<<"Enter the second number: ";
    cin>>b;
    int c;
    cout<<"Enter the third number: ";
    cin>>c;
    if(a<=b){
        if(a<=c) cout<<a<<" is the least number."<<endl;
        else cout<<c<<" is the least number."<<endl;
    }
    else{
        if(b<=c) cout<<b<<" is the least number."<<endl;
        else cout<<c<<" is the least number."<<endl;
    }
}