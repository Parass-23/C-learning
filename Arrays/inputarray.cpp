#include <iostream>
#include <iterator>

using namespace std;
int main(){
    int n;
    cout<<"enter array size:";
    cin>>n;
    int arr[n];
    cout<<"enter array elem: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    
}