#include <iostream>
#include <climits>
using namespace std;
int main() {
    int x = INT_MAX;
    cout << x << endl;
    int y = x + 1; // This will cause an overflow
    cout << y << endl;
    int z = INT_MIN; // This will cause an underflow
    cout << z << endl;
}