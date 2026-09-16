#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int maxCount = 0;
    char ans;

    for (int i = 0; i < s.size(); i++) {
        int count = 0;

        for (int j = 0; j < s.size(); j++) {
            if (s[i] == s[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            ans = s[i];
        }
    }

    cout << ans << " " << maxCount;
}