#include <iostream>
#include <string>
#include <vector>
using namespace std;

string biggernum(string s1, string s2) {

    // Remove leading zeros from s1
    int i = 0;
    while(i < s1.length() && s1[i] == '0') {
        i++;
    }
    s1 = s1.substr(i);

    // Remove leading zeros from s2
    i = 0;
    while(i < s2.length() && s2[i] == '0') {
        i++;
    }
    s2 = s2.substr(i);

    // If number was something like "0000"
    if(s1 == "")
        s1 = "0";

    if(s2 == "")
        s2 = "0";

    // Compare length first
    if(s1.length() > s2.length())
        return s1;

    if(s1.length() < s2.length())
        return s2;

    // Same length -> lexicographical comparison
    if(s1 > s2)
        return s1;

    return s2;
}

int main() {

    vector<string> arr = {"1022", "2039", "0090", "0976", "8976"};

    string max = arr[0];

    int n = arr.size();

    for(int i = 1; i < n; i++) {
        max = biggernum(arr[i], max);
    }

    cout << max << endl;
}