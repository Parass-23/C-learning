#include <iostream>
#include <algorithm>
using namespace std;
// int power(int a,int b){
//     if(a==1 || b==0) return 1;
//     int ans=a*power(a,b-1);
//     return ans;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<power(a,b);
// }
//--------------------------------
int power(int a,int b){
    if(a==1 || b==0) return 1;
    int ans=power(a,b/2);
    if(b%2==0){
        return ans*ans;
    }
    else return a*ans*ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
}