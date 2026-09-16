#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string s="paras";
    s.push_back(4);
    cout<<s<<endl;

    // sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    //it gets sort and reverse by their ascii values
    cout<<s<<endl;

}