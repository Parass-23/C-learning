#include <iostream>
#include <iterator>

using namespace std;
int main(){
    int mul=1;
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/4;
    for (int i=0;i<n;i++){
        mul*=arr[i];
    }
    cout<<mul<<endl;
}