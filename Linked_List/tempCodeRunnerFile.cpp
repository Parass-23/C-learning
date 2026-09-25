#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;
    node(int val){
        this->val=val;
    }
};
int main(){
    node a(7);
    node b(0);
    node c(1);
    node d(8);
    node e(2);

    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=&e;

    cout<<a.next->val<<endl;
}