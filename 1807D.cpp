#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned long int uli;

void solve()
{
    int n, q; cin >> n >> q;
    int a[n + 1]; a[0] = 0;
    for (int i = 1; i <= n; i++) {
        int val;
        cin >> val;
        a[i] = a[i - 1] + val;
    }
    while(q--){
        int l,r, k, sum = 0;
        cin >> l >> r >> k;
        sum += a[n] - (a[r] - a[l - 1]) + (r - l + 1)*k;
        //cout << sum << endl;
        cout << ((sum % 2) ? "YES" : "NO") << "\n";   
    }    
}

int main()
{
    int test = 1; cin >> test;
    while (test--) solve();
    return 0;
}