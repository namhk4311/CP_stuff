#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    int n; cin >> n;
    int a[n], total = n;
    for (int &x: a) cin >> x;
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++){
        if (abs(a[i] - a[i + 1]) <= 1) total--; 
    }    
    if (total == 1) cout << "YES";
    else cout << "NO";
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test = 1; cin >> test;
    while (test--) solve();
    return 0;
}