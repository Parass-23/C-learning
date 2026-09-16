#include<iostream>
using namespace std;

int main() {
    int arr[][4] = {{5,8,1,2},
                    {9,9,4,4},
                    {7,0,3,5}};

    // for(int i = 0; i < 3; i++) {

    //     if(i % 2 == 0) {   // Even row
    //         for(int j = 0; j < 4; j++) {
    //             cout << arr[i][j] << " ";
    //         }
    //     }
    //     else {             // Odd row
    //         for(int j = 3; j >= 0; j--) {
    //             cout << arr[i][j] << " ";
    //         }
    //     }
    // }

    //------------------------------
    
    for(int j = 0; j < 4; j++) {

        if(j % 2 == 0) {  
            for(int i = 2; i>=0; i--) {
                cout << arr[i][j] << " "; // Even row
            
            }
        }
        else {             // Odd row
            for(int i = 0; i < 3; i++) {
                cout << arr[i][j] << " ";
            }
        }
    }

}