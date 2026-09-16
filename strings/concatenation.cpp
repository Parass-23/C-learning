#include <iostream>
#include <string>
using namespace std;
int main() {
    string s1="111";
    string s2="222";
    string s3=s1+s2;
    cout<<s3<<endl;

    string s="abc";
    // string x=s+4; error
    string x=s+"4";
    cout<<x<<endl;

    string s4="paras";
    s4+=" nagdeve";
    cout<<s4<<endl;
}