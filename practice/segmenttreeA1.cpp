#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;

struct SegmentTr{
    int size;
    vector<ll> sums;
    void init(int n){
        size = 1;
        while (size < n) size *= 2;
        sums.assign(2 * size, 0LL);
    }

    void build(vector<int> &a, int x, int lx, int rx){
        if (rx - lx == 1){
            if (lx < a.size()) sums[x] = a[lx];
            return;
        }
        int m = (lx + rx) / 2;
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);
        sums[x] = sums[2 * x + 1] + sums[2 * x + 2];
    }

    void build(vector<int> &a){
        build(a, 0, 0, size);
    }
    void set(int i, int v, int x, int lx, int rx){
        if (rx - lx == 1){
            sums[x] = v;
            return;
        }
        int m = (lx + rx) / 2;
        if (i < m){
            set(i, v, 2 * x + 1, lx, m);
        }
        else {
            set(i, v, 2 * x + 2, m, rx);
        }
        sums[x] = sums[2 * x + 1] + sums[2 * x + 2];
    }
    void set(int i, int v) {
        set(i, v, 0, 0, size);
    }
    ll sum(int l, int r, int x, int lx, int rx){
        if (r <= lx || rx <= l) return 0;
        if (l <= lx && rx <= r) return sums[x];
        int m = (lx + rx) / 2;
        ll s1 = sum(l, r, 2 * x + 1, lx, m);
        ll s2 = sum(l, r, 2 * x + 2, m, rx);
        return s1 + s2;
    }
    ll sum(int l, int r){
        return sum(l, r, 0, 0, size);
    }
    
};

void solve()
{
    int n, m; cin >> n >> m;   
    vector<int> a(n);
    SegmentTr tree;
    
    tree.init(n);
    // for (int i = 0; i < n; i++){
    //     int v; cin >> v;
    //     //cout << "hello";
    //     tree.set(i, v);
        
    // }
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    tree.build(a);

    //for (int i = 0; i < tree.sums.size(); i++) cout << tree.sums[i] << " ";
    //cout << endl;
    while (m--){
        int q, a, b; cin >> q >> a >> b;
        if (q == 1){
            tree.set(a, b);
        }
        else {
            cout << tree.sum(a, b) << endl;
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
    int test = 1; //cin >> test;
    while (test--) solve();
    return 0;
}