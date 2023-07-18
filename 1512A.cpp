#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    int n; cin >> n;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(make_pair(x, i + 1));
    }    
    sort(a.begin(), a.end());
    if (a[0].first != a[1].first) cout << a[0].second;
    else cout << a[n - 1].second;
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int test = 1; cin >> test;
    while (test--) solve();
    return 0;
}