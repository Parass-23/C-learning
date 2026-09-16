#include <iostream>
#include <algorithm>
using namespace std;
void print(int n){
    if(n==0) return;
    cout<<n<<" ";
    print(n-1);
    if(n!=1) cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    print(n);
}