#include <bits/stdc++.h>
using namespace std;

const int inf = 2e9 + 7; 
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    int n; cin >> n;
    int ppl_tram_now = 0, max = -inf;
    while (n--)
    {
        int a, b; cin >> a >> b;
        ppl_tram_now = ppl_tram_now - a + b;
        if (ppl_tram_now >= max) max = ppl_tram_now;
    }
    cout << max;
}

int main()
{
    int test = 1; //cin >> test;
    while (test--) solve();
    return 0;
}