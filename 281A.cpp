#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
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
}

int main()
{
    int test; cin >> test;
    while (test--) solve();
    return 0;
}