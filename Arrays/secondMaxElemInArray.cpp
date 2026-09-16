#include <iostream>
#include <climits>

using namespace std;
int main(){
    // int arr[]={73,96,80,75,35,65};
    int arr[]={-1,-5,-7,-3,-4,-2};
    int mx = INT_MIN;
    int smx=INT_MIN;
    int n=sizeof(arr)/4;
    for (int i=0;i<n;i++){
        if (arr[i]>mx) mx=arr[i];
    }
    for (int i=0;i<n;i++){
        if (arr[i]>smx && arr[i]!=mx) smx=arr[i];
    }
    cout<<smx<<" "<<mx<<endl;
}