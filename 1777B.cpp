#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1e9 + 7;
const ll n = 1e5 + 5;

vector<ll> factorial(n);
void init(){
    factorial[1] = 1;
    for (int i = 2; i < n; i++){
        factorial[i] = factorial[i - 1] * i;
        factorial[i] %= mod;
    }
}

void solve()
{
    ll n; cin >> n;
    cout << (factorial[n] * (n * (n - 1) % mod)) % mod << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    init();
    int test = 1; cin >> test;
    while (test--) solve();
    return 0;
}