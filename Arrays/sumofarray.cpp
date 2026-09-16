#include <iostream>
#include <iterator>

using namespace std;
int main(){
    int sum=0;
    int arr[]={73,96,80,75,35,65};
    int n=sizeof(arr)/4;
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;
}