//it is matrix(class 12 topic)
//2d array is a array of 1d array
#include<iostream>
using namespace std;
int main(){
    int arr[][4]={{5,8,1,2},{9,9,4,4},{7,0,3,5}};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //--------------------------------
    //transpose of matrix
    // int arr[][4]={{5,8,1,2},{9,9,4,4},{7,0,3,5}};
    // for(int j=0;j<4;j++){
    //     for(int i=0;i<3;i++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

}

//TC=O(mn)