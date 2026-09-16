#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s="";
    while(n!=0){
        int lastdigit =n%10;
        char ch = lastdigit + 48;
        s.push_back(ch);
        n/=10;
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    //--------------or---------------------------
    // string s=to_string(n);
    // cout<<s;

}