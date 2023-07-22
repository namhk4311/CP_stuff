#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    ll n, k; cin >> n >> k;
    ll min_case = 1000000000, a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    if (n == 1) {
        cout << 0 << endl;
        return;
    } 
    sort(a, a + n);
    //for (int x: a) cout << x << " ";
    //cout << endl;
    ll cnt = 1;
    for (int i = 1; i < n; i++){
        ll d = a[i] - a[i - 1];
        //cout << d << " " << k;
        if (d > k) {
            if (min_case > (n - cnt)) min_case = n - cnt;
           // cout << "ok";
            cnt = 1;
        }
        else {
            ++cnt;
            if (i == n - 1) if (min_case > (n - cnt)) min_case = n - cnt;
        } 
        //cout << ":" << cnt << endl;
    }
    cout << min_case << endl;
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