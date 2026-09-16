#include <iostream>
using namespace std;
int fact(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact*=i;
    }
    return fact;

}
int main(){
    int n,r;
    cout<<"enter value  of n and r";
    cin>>n>>r;
    int ncr=fact(n)/(fact(n-r));
    cout<<ncr<<endl;
}