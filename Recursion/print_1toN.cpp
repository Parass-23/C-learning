#include <iostream>
using namespace std;
//using global varaible
// int n;
// void print(int x){
//     if(x>n) return;
//     cout<<x<<" ";
//     print(x+1);
// }
// int main(){
//     cin>>n;
//     print(n);
// }
//------------------------------
//not using global variable
// void print(int x,int n){
//     if(x>n) return;
//     cout<<x<<" ";
//     print(x+1,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     print(1,n);
// }
//-----------------------
//ultimate soln
#include <iostream>
using namespace std;
void print(int n){
    if(n==0) return;
    print(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    print(n);
}