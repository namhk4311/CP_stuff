#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    int n, m, h; cin >> n >> m >> h;
    vector<vector<ll>> a;
    vector<pair<ll, ll>> result;
    for (int i = 0; i < n; i++){
        vector<ll> tmp;
        for (int j = 0; j < m; j++){
            ll x; cin >> x;
            tmp.push_back(x);
        }
        a.push_back(tmp);
    }
    for (int i = 0; i < n; i++){
        sort(a[i].begin(), a[i].end());
    }
    ll Rudolf_points = 0;
    uli Rudolf_pen = 0;
    for (int i = 0; i < a.size(); i++){
        //vector<int> tmp;
        ll sum = 0, cnt_size = 0;
        if (a[i][0] <= h) {
            //tmp.push_back(a[i][0]);
            sum += a[i][0];
            ++cnt_size;
        }
        for (int j = 1; j < m; j++){
            if (a[i][j] + a[i][j - 1] <= h){
                a[i][j] += a[i][j - 1];
                //cout << a[i][j] << endl;
                sum += a[i][j];
                //tmp.push_back(a[i][j]);
                ++cnt_size;
            }
            else break;
        }
        result.push_back({cnt_size, sum});
    }
    Rudolf_points = result[0].first;
    Rudolf_pen =  result[0].second;
    sort(result.begin(), result.end(), greater<>());
    vector<int> finalplace;
    int min_place = INT_MAX, cnt_identical = 0;
    for (int i = 0 ; i < n; i++){
        if (Rudolf_points == result[i].first){
            min_place = min(min_place, i + 1);
            finalplace.push_back(result[i].second);
        }
    }
    sort(finalplace.begin(), finalplace.end());
    for (int i = 0; i < finalplace.size(); i++){
        if (finalplace[i] == Rudolf_pen) {
            //cout << Rudolf_result.second << endl;
            cout << min_place + i << endl;
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
    cin.tie(0);
    int test = 1; cin >> test;
    while (test--) solve();
    // for (ll i = 1; i <= 100000; i++) {
    //     cout << 1;
    //     if (i < 100000) cout << " ";
    // }
    return 0;
}