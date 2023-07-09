#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    int a, b; cin >> a >> b;
    cout << min(a, b) << " ";
    int k = max(a, b) - min(a, b);
    cout << ((k > 1) ? k / 2 : 0);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test = 1; //cin >> test;
    while (test--) solve();
    return 0;
}