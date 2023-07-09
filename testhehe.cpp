#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    ll N, X, cnt = 0; cin >> N >> X;
    ll a[N];
    for (ll i = 0; i < N; i++) cin >> a[i];
    int l = 0, r = 1;
    while (l < N && r < N){
        ll k = 0;
        for (ll i = r - 1; i >= l; i--){
            ll s = a[i + 1] - a[i];
            if (s < 0) s = -s;
            k += s;
        }
        k *= (r - l);
        if (k >= X) {
            ++cnt;
            //cout << k << ":" << l << " " << r << endl;
        }
        if (r < N - 1) ++r;
        else {
            ++l;
            if (l + 1 < N) r = l + 1;
            else break;
        }
        //if (0 < l && l < N - 1 && r == N - 1 && k < X) break;
    }
    cout << cnt;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test = 1; //cin >> test;
    while (test--) solve();
    return 0;
}