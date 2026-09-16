#include <iostream>
using namespace std;
int main(){
    int a=10,b=12;
    int*p=&a,*q=&b;
    int sum=*p+*q;
    cout<<sum;
    cout<<*p;
}