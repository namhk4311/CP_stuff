#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;

struct elements{
    int m, c;
};

struct segmttree{
    int size;
    vector<elements> binary_tree;
    elements single(int x){
        return {x, 1};
    }

    elements NEUTRAL_ELEMENT = {INT_MAX, 0};
    elements merge(elements a, elements b){
        if (a.m < b.m) return a;
        else if (a.m > b.m) return b;
        return {a.m, a.c + b.c};
    }
    void init(int n){
        size = 1;
        while (size < n) size *= 2;
        binary_tree.resize(2 * size);
    }

    void build(vector<int> &a, int x, int lx, int rx){
        if (rx - lx == 1){
            if (lx < a.size()) binary_tree[x] = single(a[lx]);
            return; 
        }
        int m = (lx + rx) / 2;
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);
        binary_tree[x] = merge(binary_tree[2 * x + 1], binary_tree[2 * x + 2]);
    }

    void build(vector<int> &a){
        build(a, 0, 0, size);
    }

    void set(int i, int v, int x, int lx, int rx){
        if (rx - lx == 1) {
            binary_tree[x] = single(v);
            return;
        }   
        int m = (lx + rx) / 2;
        if (i < m) {
            set(i, v, 2 * x + 1, lx, m);
        }
        else {
            set(i, v, 2 * x + 2, m, rx);
        }
        binary_tree[x] = merge(binary_tree[2 * x + 1], binary_tree[2 * x + 2]);
    }

    void set(int i, int v){
        set(i, v, 0, 0, size);
    }

    elements calc(int l, int r, int x, int lx, int rx){
        if (rx <= l || r <= lx) return NEUTRAL_ELEMENT;
        if (l <= lx && rx <= r) return binary_tree[x];
        int m = (lx + rx) / 2;
        elements s1 = calc(l, r, 2 * x + 1, lx, m);
        elements s2 = calc(l, r, 2 * x + 2, m, rx);
        return merge(s1, s2);
    }

    elements calc(int l, int r){
        return calc(l, r, 0, 0, size);
    }
};

void solve()
{
    int n, m; cin >> n >> m;
    segmttree tree;
    tree.init(n);
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    tree.build(a);
    while (m--) {
        int q;
        cin >> q;
        if (q == 1){
            int i, v; cin >> i >> v;
            tree.set(i, v);
        }
        else {
            int l, r; cin >> l >> r;
            auto res = tree.calc(l, r);
            cout << res.m << " " << res.c << endl;
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