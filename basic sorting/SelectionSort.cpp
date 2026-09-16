#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    // vector<int> arr={5,4,3,6,2,1};
    // int n=arr.size();
    // for(int j=0;j<n-1;j++){
    //     int mn=arr[j],mnidx=j;
    //     for(int i=j;i<n;i++){
    //         if(arr[i]<mn){
    //             mn=arr[i];
    //             mnidx=i;
    //         }
                
    //     }
    //     swap(arr[j],arr[mnidx]);
    // }
    //---------------hw----------------------------
   vector<int> arr = {5,4,3,6,2,1};
int n = arr.size();

for(int j = n-1; j > 0; j--) {

    int mx = arr[j];
    int mxidx = j;

    for(int i = 0; i < j; i++) {
        if(arr[i] > mx) {
            mx = arr[i];
            mxidx = i;
        }
    }

    swap(arr[j], arr[mxidx]);
}

for(int ele : arr) {
    cout << ele << " ";
}
}