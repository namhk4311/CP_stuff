#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    double area = 0, base_area;
    int n, d, h, cnt = 0; cin >> n >> d >> h;
    base_area = d * h / 2;
    uli a[n];
    for (uli &x: a) cin >> x;
    for (int i = 0; i < n - 1; i++){
        ll dd = a[i + 1] - a[i];
        if (dd < h) {
            area += (base_area * base_area - base_area * (h - dd) * (h - dd)) / (h * h);
            ++cnt;
        }
    }   
    area += base_area * (n - cnt);
    cout << area << endl;
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
    return 0;
}