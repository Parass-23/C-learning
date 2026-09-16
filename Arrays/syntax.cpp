#include <iostream>
#include <iterator>

using namespace std;
int main(){
    int marks[]={73,96,80,75,35,65};//index-->0,1,2,3,4...
    //it can also take float numbers(i.e 9.8)
    // float arr[]={3.14,9.8,2.81};
    // cout<<size[marks]<<endl; //gives error because of old version
    cout<<sizeof(marks)/4<<endl;//length of elem in arrays(i.e no of elem)
    cout<<marks[4]<<endl;//to access elem in array
    marks[4]=90;//to update elem in array
    cout<<marks[4]<<endl;
    cin>>marks[4];//to take input of index 4 elem
    cout<<marks[4]<<endl;


   

}