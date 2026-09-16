#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int n = s.size();
    int maxlen = 0;
    int i = 0, j = 0;
    string ans = "";
    while (j < n)
    {
        if (s[j] != ' ')
            j++;
        else
        {
            int len = j - i;
            if (len > maxlen)
            {
                maxlen = len;
                ans = s.substr(i, len);
            }
            i = j;
            while (i < n && s[i] == ' ')
            {
                i++;
                j++;
            }
        }
    }
    int len = j - i;
    if (len > maxlen)
    {
        maxlen = len;
        ans = s.substr(i, len);
    }
    cout << maxlen << " " << ans << endl;
}