#include<iostream>
#include<stack>
using namespace std;
void reverse(stack<int> & st){
    stack<int> h;
    stack<int> h1;
    while(st.size()!=0){
        h.push(st.top());
        st.pop();
    }
    while(h.size()!=0){
        h1.push(h.top());
        h.pop();
    }
    while(h1.size()!=0){
        st.push(h1.top());
        h1.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    reverse(st);
    cout<<st.top();
}