#include <iostream>
using namespace std;
// void fun(int age=20){//default parameter
//     cout<<"My age is "<<age<<endl;
// }
// int main(){
//     fun();
// }
//a power b
void power(int base,int expo=2){
    int ans=1;
    for(int i=1;i<=expo;i++){
        ans*=base;
       
    }
     cout<<ans<<endl;


}
int main(){
    power(5,3);
}