#include <iostream>
#include <iterator>

using namespace std;
int main(){
    int arr[]={73,96,80,75,35,65};
    int max = arr[0];
    int n=sizeof(arr)/4;
    for (int i=0;i<n;i++){
        if (arr[i]>max) max=arr[i];
    }
    cout<<max<<endl;
}