#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    ll n; cin >> n;
    ll a[n], cnt_max = 1, cnt_min = 1;
    for (ll &x: a) cin >> x;
    sort(a, a + n);
    if (a[n - 1] == a[0]) cout << n * (n - 1) << endl;
    else {
        for (ll i = 1; i < n; i++){
            if (a[i] == a[0]) ++cnt_min;
            else break;
        }
        for (ll i = n - 2; i >= 0; i--){
            if (a[i] == a[n - 1]) ++cnt_max;
            else break;
        }
        cout << cnt_min * cnt_max * 2 << endl;
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int test = 1; cin >> test;
    while (test--) solve();
}