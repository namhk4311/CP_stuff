#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    int n, t, check; cin >> n >> t;
    string s; cin >> s;
    char tmp[n];
    for (int i = 1; i <= t; i++)
    {
        check = -1;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == 'B' && s[j + 1] == 'G') 
            {
                tmp[j] = 'G';
                tmp[j + 1] = 'B';
                check = j + 1;
            }
            else if (j != check) tmp[j] = s[j]; 
        }
        for (int j = 0; j < n; j++)
        {
            s[j] = tmp[j];
        }
    }
    for (int i = 0; i < n; i++) cout << tmp[i];
}

int main()
{
    int test = 1; //cin >> test;
    while (test--) solve();
    return 0;
}