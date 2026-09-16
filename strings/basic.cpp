#include <iostream>
#include <string>
using namespace std;
int main() {
    //taking output of string
    // string x="paras is a good boy";
    // cout<<x<<endl;

    //-------------------------------
    //taking input from string
    string s;
    //cin>>s;//prints only first word of sentence
    getline(cin,s);//prints all sentence
    cout<<s;
    


};
