#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;

struct SegmtTree{
    int size;
    vector<int> values;
    void init(int n){
        size = 1;
        while (size < n) size *= 2;
        values.assign(2 * size, 0LL);
    }

    void build(vector<int> &a, int x, int lx, int rx){
        if (rx - lx == 1) {
            if (lx < a.size()) values[x] = a[lx];
            return;
        }
        int m = (lx + rx) / 2;
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);
        values[x] = min(values[2 * x + 1], values[2 * x + 2]);
    }

    void build(vector<int> &a){
        build(a, 0, 0, size);
    }

    void set(int i, int v, int x, int lx, int rx){
        if (rx - lx == 1) {
            values[x] = v;
            return;
        }
        int m = (lx + rx) / 2;
        if (i < m){
            set(i, v, 2 * x + 1, lx, m);
        }
        else set(i, v, 2 * x + 2, m, rx);
        values[x] = min(values[2 * x + 1], values[2 * x + 2]);
    }

    void set(int i, int v){
        set(i, v, 0, 0, size);
    }
    
    int calc(int l, int r, int x, int lx, int rx){
        if (r <= lx || l >= rx) return INT_MAX;
        if (l <= lx && rx <= r) return values[x];
        int m = (lx + rx) / 2;
        int s1 = calc(l, r, 2 * x + 1, lx, m);
        int s2 = calc(l, r, 2 * x + 2, m, rx);
        return min(s1, s2);
    }
    
    int calc(int l, int r){
        return calc(l, r, 0, 0, size);
    }
};

void solve()
{
    int n, m; cin >> n >> m;
    SegmtTree tree;
    tree.init(n);
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    tree.build(a);
    for (int i = 0; i < tree.values.size(); i++){
        cout << tree.values[i] << " ";
    }
    cout << "\n";
    while(m--){
        int q, a, b;
        cin >> q >> a >> b;
        if (q == 1){
            tree.set(a, b);
        }
        else {
            cout << tree.calc(a, b) << endl;
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