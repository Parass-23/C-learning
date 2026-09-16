#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> arr={5,4,3,6,2,1};
    int n=arr.size();
    //normal sort
    // sort(arr.begin(),arr.end());
    //------------------------------------
    //bubble sort
    for(int j=0;j<n-1;j++){
        int swaps=0;
        for(int i=0;i<n-1-j;i++){
            if(arr[i]>arr[i+1])
                swap(arr[i],arr[i+1]);
                swaps++;
        }
        if(swaps==0) break;
    }
    for(int ele:arr){
        cout<<ele<<" ";
    }
}