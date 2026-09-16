// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     if (num%5 == 0 || num%3 == 0) cout<<num<<" is divisible by 5 or 3."<<endl;
//     else cout<<num<<" is not divisible by 5 or 3."<<endl;
// }
   

//another more adv code compared to the above code but its on the topic of divisiblity 5 and 3

#include <iostream>
using namespace std;
int main(){
   int num;
    cout<<"Enter a number: ";
    cin>>num;
    if (num%5 == 0 && num%3 == 0) cout<<num<<" is divisible by both 5 and 3."<<endl;
    else if (num%5 == 0) cout<<num<<" is divisible by 5."<<endl;
    else if (num%3 == 0) cout<<num<<" is divisible by 3."<<endl;
    else cout<<num<<" is not divisible by either 5 or 3."<<endl;
    
      
}