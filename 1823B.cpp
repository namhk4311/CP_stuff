#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;

void solve()
{
    int n, k, cnt = 0, result = 1; cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        a[i] -= (i + 1);
        if (abs(a[i]) % k) ++cnt;
    }    
    if (cnt > 2) cout << -1 << endl;
    else if (cnt == 2) cout << 1 << endl;
    else cout << 0 << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test = 1; cin >> test;
    while (test--) solve();
    return 0;
}