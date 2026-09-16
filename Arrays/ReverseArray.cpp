#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v={10,20,30,40,50,60,70};
    // for(int i=v.size()-1;i>=0;i--){
    //     cout<<v[i]<<" ";
    // }
    //-----------or---------------------------
    int i=0,j=v.size()-1;
    
    while (i<j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        //----------------OR--------------
        // swap(v[i],v[j]);
        i++;
        j--;
    }
    for(int ele:v){
        cout<<ele<<" ";
    }

    
}