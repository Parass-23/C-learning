#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m,n;
    cout<<"enter rows : ";
    cin>>m;
    cout<<"enter cols : ";
    cin>>n;
    vector<vector<int>> arr(m,vector<int>(n,0));
    arr.push_back(vector<int>(4,-1));
    for(int i=1;i<arr.size();i++){
        for(int j=1;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}