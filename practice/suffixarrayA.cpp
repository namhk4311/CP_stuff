#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    string s; cin >> s;
    s += '#';
    int n = s.length();
    vector<int> p(n), c(n);
    vector<pair<char,int>> a(n);
    for (int i = 0 ; i < n; i++){
        a[i] = {s[i], i};
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        p[i] = a[i].second;
    }
    c[p[0]] = 0;
    for (int i = 1; i < n; i++){
        if (a[i].first == a[i - 1].first) c[p[i]] = c[p[i - 1]];
        else c[p[i]] = c[p[i - 1]] + 1;
    }
    int k = 0;
    while ((1 << k) < n){
        vector<pair<pair<int, int>, int>> a(n);
        for (int i = 0; i < n; i++){
            a[i] = {{c[i], c[(i + (1 << k)) % n]}, i};
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++) p[i] = a[i].second;
        c[p[0]] = 0;
        for (int i = 1; i < n; i++){
            if (a[i].first == a[i - 1].first) c[p[i]] = c[p[i - 1]];
            else c[p[i]] = c[p[i - 1]] + 1;
        }
        ++k;
    }
    for (int x: p) cout << x << " ";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int test = 1; //cin >> test;
    while (test--) solve();
    return 0;
}