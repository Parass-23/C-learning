#include<iostream>
#include<stack>
using namespace std;
void printtoptobottom(stack<int>& st){
    stack<int> h;
    while(st.size()!=0){
        cout<<st.top()<<" ";
        h.push(st.top());
        st.pop();
    }
    while(h.size()!=0){
        st.push(h.top());
        h.pop();
    }
    cout<<endl;
}
void printbottomtotop(stack<int>& st){
    stack<int> h;
    while(st.size()!=0){
        h.push(st.top());
        st.pop();
    }
    while(h.size()!=0){
        cout<<h.top()<<" ";
        st.push(h.top());
        h.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    printtoptobottom(st);
    printbottomtotop(st);
}