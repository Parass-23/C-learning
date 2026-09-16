#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.size();
    for(int i=0;i<n;i++){
        for(int j=1;j<n+1-i;j++){
            cout<<s.substr(i,j)<<" ";

        }
        cout<<endl;
    }
}