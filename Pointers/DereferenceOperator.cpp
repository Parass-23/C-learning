#include<iostream>
using namespace std;
int main(){
    int x=7;
    int* p=&x;
    cout<<*p<<endl;//in this * is called derefernce operator
                   //it goes to the address of p and accesses the 'p' value
                   //then print it
    *p=10;//in this * is called derefernce operator
            //it goes to the address of p and accesses the 'p' value
            //then updates it
    *p+=10;//it increments the value of x through dereference operator
    cout<<x;
}