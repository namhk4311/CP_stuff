#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;

string s;
int n;

void count_sort(vector<int> &p, vector<int> &c){
    int t = p.size();
    vector<int> cnt(t), pos(t), p_new(t);
    for (auto x: c){
        cnt[x]++;
    }
    pos[0] = 0;
    for (int i = 1; i < t; i++){
        pos[i] = pos[i - 1] + cnt[i - 1];
    }
    for (auto x: p){
        int i = c[x];
        p_new[pos[i]] = x;
        pos[i]++;
    }
    p = p_new;
}

bool BS(string ss, vector<int> p){
    int t = ss.length();
    //cout << "Hello";
    int l = 0, r = n - 1;
    
    while (l <= r){
        int m = (l + r) / 2;
        if (s.substr(p[m], t) == ss) return true;
        else if (s.substr(p[m], t) < ss) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    return false;
}

int main()
{
    // bool s = "bba" < "bab";
    // cout << s << endl;
    // ios_base::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);
    cin >> s;
    int test; cin >> test;
    s += '#';
    n = s.length();
    
    vector<pair<char,int>> a(n);
    for (int i = 0; i < n; i++) a[i] = {s[i], i};
   
    sort(a.begin(), a.end());
    vector<int> p(n), c(n);
    for (int i = 0; i < n; i++) p[i] = a[i].second;
    c[p[0]] = 0;

    for (int i = 1; i < n; i++){
        if (a[i].first == a[i - 1].first) c[p[i]] = c[p[i - 1]];
        else c[p[i]] = c[p[i - 1]] + 1;
    }
     //cout << "HELLO"<< endl;
    int k = 0; 
    //cout << n << endl;
    while ((1 << k) < n){
        for (int i = 0; i < n; i++){
            p[i] = (p[i] - (1 << k) + n) % n; 
        }
        count_sort(p, c);
        vector<int> c_new(n);
        c_new[p[0]] = 0;
        for (int i = 1; i < n; i++) {
            pair<int, int> now = {c[p[i]], c[(p[i] + (1 << k)) % n]};
            pair<int, int> prev = {c[p[i - 1]], c[(p[i - 1]  + (1 << k)) % n]};
            if (now == prev) c_new[p[i]] = c_new[p[i - 1]];
            else c_new[p[i]] = c_new[p[i - 1]] + 1;
        }
        c = c_new;
        ++k;
    }
    // for (int i = 0; i < n; i++){
    //     cout << p[i] << " " << s.substr(p[i], 2) << endl;
    // }    
    while (test--) {
        string ss; cin >> ss;
        if (BS(ss, p)) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}