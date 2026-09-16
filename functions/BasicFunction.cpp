#include <iostream>
using namespace std;
// void paras(){
//     cout<<"hi paras"<<endl;;
// }
// void sumit(){
//     cout<<"hi sumit"<<endl;
// }
// void purva(){
//     cout<<"hi purva"<<endl;
// }
// int main(){
//     paras();
//     purva();
//     sumit();

// }
//---------------------------------------
void paras(){
    cout<<"hi paras"<<endl;;
}
void pramod(){
    paras();
    cout<<"hi pramod"<<endl;
}
void purva(){
    cout<<"hi purva"<<endl;
    pramod();
}
int main(){
    purva();

}