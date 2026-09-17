#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printrec(vector<int>& arr,int idx){
    if(idx==arr.size()) return;
    cout<<arr[idx]<<" ";
    printrec(arr,idx+1);
}
int main(){
    vector<int> arr={5,8,2,534,8,235,-8521};
    printrec(arr,0);
}