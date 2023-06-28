#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    int n, sumof0 = 0; cin >> n;
    bool xgreaterthan1 = false;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        if (x == 0) ++sumof0;
        else if (x >= 2) xgreaterthan1 = true;
    }    
    if (sumof0 <= (n + 1) / 2) cout << 0 << endl;
    else if (sumof0 == n || xgreaterthan1) cout << 1 << endl;
    else cout << 2 << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test = 1; cin >> test;
    while (test--) solve();
    return 0;
}