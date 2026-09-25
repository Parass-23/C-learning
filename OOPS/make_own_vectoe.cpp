#include<iostream>
using namespace std;
class myvector{
private:
    int length;
    int* arr;
    int cap;
public:
    myvector(int capacity,int default_value){
        length=cap=capacity;
        arr=new int[capacity];
        for(int i=0;i<capacity;i++){
            arr[i]=default_value;
        }
    }
    int size(){
        return length;
    }
    void pop_back(){
        length--;
    }
    void push_back(int val){
        if(length==cap){
            cap=2*cap;
            int temp[cap];
            for(int i=0;i<length;i++){
                temp[i]=arr[i];
            }
            delete arr;
            arr=temp;
        }
        arr[length++]=val;
    }
    void print(){
        for(int i=0;i<length;i++){
            cout<<arr[i]<<" ";

        }
        cout<<endl;
    }
};
int main(){
    myvector v(5,-1);
    v.print();
    v.pop_back();
    v.print();
    v.push_back(10);
    v.print();
    // int* arr=new int[5];
    // arr[0]=10;arr[1];

    // int b[]={67,21}
}