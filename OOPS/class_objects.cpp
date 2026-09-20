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
}