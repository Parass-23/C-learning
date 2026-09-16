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
    int ncr=fact(n)/(fact(r)*fact(n-r));
    cout<<ncr<<endl;
}
// int main(){
//     int n,r;
//     cout<<"enter value  of n and r";
//     cin>>n>>r;
//     int nfact=1;
//     for(int i=1;i<=n;i++){
//         nfact*=i;
//     }
//     int rfact=1;
//     for(int i=1;i<=r;i++){
//         rfact*=i;
//     }
//     int nrfact=1;
//     for(int i=1;i<=n-r;i++){
//         nrfact*=i;
//     }
    // int ncr=nfact/(rfact*nrfact);
    // cout<<ncr<<endl;
    

// }