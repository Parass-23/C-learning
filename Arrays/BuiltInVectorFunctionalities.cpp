#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v={5,4,7,9,1};
    sort(v.begin(),v.end());//to print elem of array  in ascending order
    reverse(v.begin(),v.end());// to reverse print the elem of array
    sort(v.begin()+1,v.end()-1);//to sort a specific part
    reverse(v.begin()+1,v.end()-1);//to reverse a specific part
    for(int ele:v) cout<<ele<<" ";
}