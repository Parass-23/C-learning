#include <iostream> 
using namespace std; 
int main(){ 
// method 1
int n;
cout<<"enter a num : ";
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<"  ";
    }
    for (int j=1;j<=i;j++){
        cout<<"* ";
    }
    cout<<endl;
}
}
//--------------------------------------------------
//method 2
// int n;
// cout<<"enter a num : ";
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j+=1){
//         if(i+j>n) cout<<"* ";
//         else cout<<"  ";

//     }
//     cout<<endl;
// }
// }