#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n, cnt = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i+1])
        {cnt++;}
    }
    cout << cnt;
}

int main()
{
    int test = 1;
    while (test--) solve();
    return 0;
}