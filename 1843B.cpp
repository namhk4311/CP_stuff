#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    int n, cnt = 0; cin >> n;
    ll max_sum = 0, min_sum = 0;
    vector<int> a;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        if (x == 0) continue;
        else {
            a.push_back(x);
            cnt++;
        }
    }    
    //cout << cnt << endl;
    for (int i = 0; i < cnt; i++){
        max_sum += abs(a[i]);
        if ((a[i] < 0 && a[i + 1] > 0 && i <= cnt - 2) || (a[i] < 0 && (i == cnt - 1))) ++min_sum;
        //cout << min_sum << endl;
    }
    cout << max_sum << " " << min_sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test = 1; cin >> test;
    while (test--) solve();
    return 0;
}