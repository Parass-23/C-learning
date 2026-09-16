#include <iostream> 
using namespace std; 

int main(){ 
    int a; 
    cout << "Enter the first term: "; 
    cin >> a; 
    
    int d; 
    cout << "Enter the common Difference : "; 
    cin >> d; 
    
    int n; 
    cout << "Enter how many terms you want in AP: "; 
    cin >> n; 
    
    for(float i = 1; i <= n; i++) {
        cout << a << " "; 
        a +=d; 
    }
}