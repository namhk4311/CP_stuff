#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    int n, cnt = 0, max_quality = -INT_MAX; cin >> n;
    vector<pair<int, int>> response;
    for (int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        if (a <= 10) {
            pair<int, int> k(i + 1, b);
            response.push_back(k);
            max_quality = max(max_quality, b);
        }
    }
    for (int i = 0; i < response.size(); i++){
        if (response[i].second == max_quality) {
            cout << response[i].first << endl;
            return;
        }
    }
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