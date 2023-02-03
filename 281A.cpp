#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    for (int i = 97; i < 123; i++)
    {
        if (s[0] - 0 == i)
        {
            s[0] = (char)(s[0]-32);
        }
    }
    cout << s;
    return 0;
}