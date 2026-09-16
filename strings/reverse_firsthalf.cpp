#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    int i=0;
    int j=n/2-1;
    while(i<=j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    cout<<s<<endl;
}