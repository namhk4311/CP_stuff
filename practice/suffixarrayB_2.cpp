#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;

void count_sort(vector<int> &p, vector<int> &c){
    int n = p.size();
    vector<int> cnt(n);
    for (auto x: c) {
        cnt[x]++;
        //cout << x << endl;
    }
    //cout << "=========" << endl;
    vector<int> p_new(n);
    vector<int> pos(n);
    pos[0] = 0;
    for (int i = 1; i < n; i++){
        pos[i] = pos[i - 1] + cnt[i - 1];//sus
        //cout << cnt[i - 1] << " ";
    }
    //cout << endl;
    for (auto x: p){
        int i = c[x];
        p_new[pos[i]] = x;
        pos[i]++;
    }
    p = p_new;
}

void solve()
{
    string s; cin >> s;
    s += '#';
    int n = s.length();
    vector<pair<char, int>> a(n);    
    for (int i = 0; i < n; i++){
        a[i] = {s[i], i};
    }
    sort(a.begin(), a.end());
    vector<int> p(n), c(n);
    for (int i = 0; i < n; i++) p[i] = a[i].second;
    c[p[0]] = 0;
    for (int i = 1; i < n; i++){
        if (a[i].first == a[i - 1].first) c[p[i]] = c[p[i - 1]];
        else {
            c[p[i]] = c[p[i - 1]] + 1;
        }
    }
    int k = 0;
    while ((1 << k) < n){
        for (int i = 0; i < n; i++){
            p[i] = (p[i] - (1 << k) + n) % n; 
        }
        count_sort(p, c);
        vector<int> c_new(n);
        c_new[p[0]] = 0;
        for (int i = 1; i < n; i++){
            pair<int, int> prev = {c[p[i - 1]], c[(p[i - 1] + (1 << k)) % n]};
            pair<int, int> now = {c[p[i]], c[(p[i] + (1 << k)) % n]};
            if (prev == now) c_new[p[i]] = c_new[p[i - 1]];
            else c_new[p[i]] = c_new[p[i - 1]] + 1;
        }
        c = c_new;
        ++k;
    }
    for (int i = 0; i < n; i++) cout << p[i] << " " << s.substr(p[i], n - p[i]) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int test = 1; //cin >> test;
    while (test--) solve();
    return 0;
}