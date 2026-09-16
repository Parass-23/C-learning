#include <iostream>
using namespace std;
int main(){
  int l;
    cout<<"Enter length: ";
    cin>>l;
    int b;
    cout<<"Enter breadth: ";
    cin>>b;
    int area = l*b;
    int perimeter = 2*(l+b);
    if (area>perimeter) cout<<"Area is greater than perimeter";
    else if (area<perimeter) cout<<"Perimeter is greater than area";
    else cout<<"Area and perimeter are equal";
  int num;
  
}