#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr(5,-1);//syntax //you can also put default value
    for(int i=0;i,i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.push_back(5);//adds an element at end
    arr.push_back(14);
    arr.pop_back();//removes last element
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}