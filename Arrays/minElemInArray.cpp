#include <iostream>
#include <iterator>

using namespace std;
int main(){
    int arr[]={73,96,80,75,35,65};
    int min = arr[0];
    int n=sizeof(arr)/4;
    for (int i=0;i<n;i++){
        if (arr[i]<min) min=arr[i];
    }
    cout<<min<<endl;
}