#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// void change(vector<int> v){//pass by value
//     v[2]=99;
// }
void change(vector<int>& v){//pass by reference
    v[2]=99;
}
int main(){
    vector<int> v={5,4,7,9,1};
    change(v);
    cout<<v[2]<<endl;
}