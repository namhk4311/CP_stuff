#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    int n, H, M; cin >> n >> H >> M;
    int duration_min = INT_MAX; 
    while (n--) {
        int h, m, duration; cin >> h >> m;
        if (H < h) duration = 60 * (h - H) + (m - M);
        else if (H > h || M > m) duration = 60 * (24 - (H - h)) + (m - M);
        else {
            duration = m - M;  
        }
        duration_min = min(duration_min, duration);
    }
    cout << duration_min / 60 << " " << duration_min % 60 << endl;    
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