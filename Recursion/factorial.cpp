#include <iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1) return 1;
    int ans=n*fact(n-1);
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}
// without recursion
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact *=i;
//     }
//     cout<<fact;
// }