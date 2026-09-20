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
    void print(){
        cout<<name<<" "<<rno<<" "<<cgpa<<endl;
    }
};
void change(student& s){
    s.name="pramod";
}

int main(){
    student x("paras",2,9.8);
    change(x);
    x.print();
}