#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    int n; cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string x; cin >> x;
        mp[x]++;
    }
    for (pair<string, int> x : mp)
    {
        cout << x.first << ": " << x.second << "lan " << endl; 
    }
}

int main()
{
    int test = 1;
    while (test--) solve();
    return 0;
}