#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if (ch>='A' && ch<='Z') cout<<ch<<" is a capital alphabet."<<endl;
    else cout<<ch<<" is not a capital alphabet."<<endl;
      
}