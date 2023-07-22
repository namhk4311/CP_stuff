#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
ll gcd(ll a, ll b){
    if (b == 0) return a;
    return gcd(b, a % b);
} 

void solve()
{
    int n, cnt = 0; cin >> n;
    ll a[n], tmp = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        tmp = gcd(tmp, a[i]);
    }    
    cout << a[n - 1] / tmp << endl;
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