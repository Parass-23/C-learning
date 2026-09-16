#include <iostream>
#include <string>
using namespace std;
int main() {
    string s="paras nagdeve";
    int n= s.size();
    // for(int i=0;i<n;i++){
    //     cout<<s[i];
    // }
    //or
    for(char ch:s){
        cout<<ch;
    }
}