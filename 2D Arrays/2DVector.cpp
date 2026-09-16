#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v1={1,2,3,4,5};
    vector<int> v2={8,7,6};
    vector<int> v3={4,4,4,4};
    vector<int> v4={9};

    vector<vector<int>> v={v1,v2,v3,v4};//jacked array
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    // v.push_back(v1);
    // v.push_back(v2);
    // v.push_back(v3);
    // v.push_back(v4);
}