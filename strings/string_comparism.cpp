#include <iostream>
#include <string>
using namespace std;
int main(){
    //comparism happens with only first alphabet or digit if they are same then move to another alphabet or digit
    string x="abc";
    string y="xyz";
    if(x==y) cout<<"same"<<endl;
    else cout<<"not same"<<endl;

    if(x>y) cout<<x<<" is grater than "<<y;
    else cout<<y<<" is greater than "<<x<<endl;
}