#include <iostream>
using namespace std;
int x=8;
int main(){
    int x =56;//scope resolution operator
    cout<<x<<endl;
    cout<<::x<<endl;
}