#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cout<<"enter a string";
    getline(cin,s);
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]>=65 && s[i]<=90) 
        s[i] +=32;
        else if(s[i]>=97 && s[i]<=122)
        s[i] -= 32;
        else continue;
    }
    cout<<s<<endl;
}