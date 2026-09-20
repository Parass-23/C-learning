#include<iostream>
#include<vector>
using namespace std;
class student{
public:
    string name;
    int rno;
    float cgpa;
    student(){//default constructer

    }
    student(string n,int r,float c){
        name=n;
        rno=r;
        cgpa=c;
    }
};

int main(){
    student x("paras",2,9.8);
    student y("pramod",3,9.5);
    student z("purva",4,9);
    cout<<x.name<<" "<<x.rno<<" "<<x.cgpa<<endl;
}