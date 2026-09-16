#include <iostream>
#include <string>
using namespace std;
int main() {
    string s="paras";
    //s.substr(idx,length)
    cout<<s.substr(1,3)<<endl;//1 se start , 3len
    cout<<s.substr(0,3)<<endl;//0 se start ,3 len
    cout<<s.substr(2)<<endl;//2 se end

}