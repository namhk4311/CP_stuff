#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    int a, b, c; cin >> a >> b >> c;
    if (a + b >= 10) cout << "YES\n";
    else if (a + c >= 10) cout << "YES\n";
    else if (b + c >= 10) cout << "YES\n";
    else cout << "NO\n";
}

int main()
{
    #ifndef ONLINE_JUDGE
       freopen("INP.txt","r",stdin);
       freopen("OUT.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int test = 1; cin >> test;
    while (test--) solve();
    return 0;
}