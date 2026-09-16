#include <iostream>
using namespace std;
// int main(){
//     int a=8,b=7;
//     cout<<a<<" "<<b<<endl;
//     //this is main
//     // int temp=a;
//     // a=b;
//     // b=temp;
//     //---------------or----------------------
//     // a=a+b;
//     // b=a-b;
//     // a=a-b;
//     //----------or------------------------
//     // a=(a+b)-(b=a);
//     // cout<<a<<" "<<b<<endl;
//     //----------------OR----------------
//     //using function
//     swap(a,b);
//     cout<<a<<" "<<b<<endl;

// }
//------------------------------------------------------------
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;

}
int main(){
    int a=5,b=2;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
}