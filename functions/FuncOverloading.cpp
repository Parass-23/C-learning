#include <iostream>
using namespace std;
//case 1
// void fun(){
//     cout<<"hi"<<endl;
// }
// void fun(int a){
//     cout<<"good morning"<<endl;
// }
// void fun(int x,int y){
//     cout<<"Hi Good Morning"<<endl;
// }
// // this will give error due to default parameter
// // void fun(int x=7){
// //     cout<<"HI"<<endl;
// // }
// int main(){
//     fun(1);
// }
//---------------------------------------------------
//Case 2
// according to which datatype you give when calling fun
//it willprint accordingly
// void fun(char x){
//     cout<<"hi"<<endl;
// }
// void fun(double x){
//     cout<<"good morning"<<endl;
// }
// void fun(int x){
//     cout<<"Hi Good Morning"<<endl;
// }
// int main(){
//     fun(1);
// }
//----------------------------------------------------
//case  3
void fun(int x,float y){
    cout<<"Paras"<<endl;
}
void fun(float x,int y){
    cout<<"Pramod"<<endl;
}
int main(){
    fun(3.14,12);
}
//--------------------
//this will give error(exception)
// void fun(int x,char y){
//     cout<<"Paras"<<endl;
// }
// void fun(char x,int y){
//     cout<<"Pramod"<<endl;
// }
// int main(){
//     fun(24,12);
// }

