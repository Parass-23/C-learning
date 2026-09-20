#include<iostream>
#include<vector>
using namespace std;
class car{
public:
    string name;
    int power;
    float mileage;
    bool isE20Compatible;
    void print(){
        cout<<name<<" "<<power<<" "<<mileage<<" "<<isE20Compatible<<endl;
    }
};
int main(){
    car c1;
    c1.name="Hyundai Verna";
    c1.power=118;
    c1.mileage=9.2;
    c1.isE20Compatible=true;

    car c2={"toyota fortuner",200,7.6,false};
    c1.print();
    c2.print();
}