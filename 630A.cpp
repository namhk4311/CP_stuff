#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long long ull;


ull powll(ull a, ull b){
    ull res = 1;
    while(b){
        if (b % 2 == 1){
            res *= a;
            res %= 100;
        }
        b /= 2;
        a *= a;
        //cout << res << " " << a << " " << b;
        //cout << endl;
        a %= 100;
    }
    return res;
}

void solve()
{
    ll n; cin >> n;
    cout << powll(5,n);
}

int main()
{
    #ifndef ONLINE_JUDGE
       freopen("INP.txt","r",stdin);
       freopen("OUT.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int test = 1; //cin >> test;
    while (test--) solve();
    return 0;
}