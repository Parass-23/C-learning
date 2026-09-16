//using selection sort
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int k;
    cin>>k;
    vector<int> arr={5,7,8,3,4,0};
    int n=arr.size();
    for(int j=0;j<k;j++){
        int mn=arr[j],mnidx=j;
        for(int i=j;i<n;i++){
            if(arr[i]<mn){
                mn=arr[i];
                mnidx=i;
            }
                
        }
        swap(arr[j],arr[mnidx]);
    }
    cout<<arr[k-1];
}