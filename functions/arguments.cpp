#include <iostream>
using namespace std;
// void minOfTwo(int a, int b){
//     if(a>b) cout<<b<<" is smaller"<<endl;
//     else cout<<a<<"  is smaller"<<endl;

// }
// int main(){
//     minOfTwo(24,34);
// }
//-------------------------------------------------
// void sum(int a,int b,int c){
//     cout<<"the sum of 3 num is "<<a+b+c;
// }
// int main(){
// sum(1,2,3);
// }
//---------------------------------------------
//star tringle
void star(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
}
int main(){
    int a;
    cout<<"enter a : ";
    cin>>a;
    star(a);
    int b;
    cout<<"enter b : ";
    cin>>b;
    star(b);
    int c;
    cout<<"enter c : ";
    cin>>c;
    star(c);

}