#include <iostream>
#include <iterator>

using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    int arr[]={73,96,80,75,35,65};
    int m=sizeof(arr)/4;
    bool flag=false;//falsemeans not present
    for(int i=0;i<m;i++){
        if (n==arr[i]){
            flag=true;//true means present
            break;
    }
    
}
    if(flag==true) cout<<"element found"<<endl;
    else cout<<"elem not found";
}