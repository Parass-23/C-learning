#include<iostream>
#include<vector>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float cgpa;
};
int main(){
    Student x;
    x.name="paras";
    x.cgpa=9.5;
    x.rno=2;
    cout<<x.name<<" "<<x.cgpa<<" "<<x.rno;
    Student y;
    y.name="pramod";
    y.cgpa=9.0;
    y.rno=3;
    cout<<y.name<<" "<<y.cgpa<<" "<<y.rno;
    Student z;
    z.name="purva";
    z.cgpa=8.9;
    z.rno=4;
    cout<<z.name<<" "<<z.cgpa<<" "<<z.rno;
}