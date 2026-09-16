#include <iostream>
using namespace std;
void change(int x[]){
    x[0]=20;
}
int main(){
    int x[]={1,2,3,4};
    change(x);
    cout<<x[0]<<endl;
}
