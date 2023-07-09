#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    vector<pair<int, int>> p;
    int n, k, cnt = 0; cin >> n >> k;
    while(n--){
        int l, r; cin >> l >> r;
        p.push_back({l, r});
        if (l <= k && k <= r) ++cnt;
    }
    int max_pas = 0;
    for(int i = 0; i < p.size(); i++){
        int pas = 1, overlap = 0;
        for(int j = 0; j < p.size(); j++){
            if(i == j) continue;
            else{
                if(p[i].first < p[j].first && p[j].first < p[i].second) ++pas;
            }
        }    
        max_pas = max(max_pas, pas);
        cout << max_pas << endl;
    }
    cout << ((max_pas < cnt) ? "YES" : "NO") << endl;
}

int main()
{
    freopen("INP.txt","r",stdin);
    freopen("OUT.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test = 1; cin >> test;
    while (test--) solve();
    return 0;
}