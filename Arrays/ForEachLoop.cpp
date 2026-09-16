#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5};//vector initialization can be done this wayas well
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    for(int ele : v){//syntax of ForEachLoop
        cout<<ele<<" ";
    }
}