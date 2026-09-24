#include<iostream>
using namespace std;
class cricketer{
public:
    string name;
    int runs;
    float average;
    cricketer(string name,int runs,float average){
        this->name=name;
        this->runs=runs;
        this->average=average;

    }
};
int main(){
    cricketer c1("virat kohli",14000,58.1);
    cricketer c2("sachin tendulkar",18000,46.7);
    cricketer c3("rohit sharma",11000,49.4);

    cricketer* ptr =&c1;
    cout<<(*ptr).name<<endl;
}