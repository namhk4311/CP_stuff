#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void radix_sort(vector<pair<pair<int, int>, int>> &a){
    int l = a.size();
    // second count of the pair
    {
        vector<pair<pair<int, int>, int>> a_new(l);
        vector<int> count(l), pos(l);
        for (auto x: a){
            count[x.first.second]++;
        }
        pos[0] = 0;
        for (int i = 1; i < l; i++){
            //int x = a[i].first.second;
            pos[i] = pos[i - 1] + count[i - 1];
        }
        for (auto k: a){
            int x = k.first.second;
            a_new[pos[x]] = k;
            pos[x]++;
        }
        a = a_new;
    }
    // first count of the pair
    {
        vector<pair<pair<int, int>, int>> a_new(l);
        vector<int> count(l), pos(l);
        for (auto x: a){
            count[x.first.first]++;
        }
        pos[0] = 0;
        for (int i = 1; i < l; i++){
            //int x = a[i].first.second;
            pos[i] = pos[i - 1] + count[i - 1];
        }
        for (auto k: a){
            int x = k.first.first;
            a_new[pos[x]] = k;
            pos[x]++;
        }
        a = a_new;
    }
} 

void solve()
{
    string s; cin >> s;
    s += '#';
    int n = s.length();
    vector<pair<char,int>> a(n);
    for (int i = 0 ; i < n; i++){
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
        vector<pair<pair<int, int>, int>> a(n);
        for (int i = 0; i < n; i++){
            a[i] = {{c[i], c[(i + (1 << k)) % n]}, i};
        }
        radix_sort(a);
        for (int i = 0; i < n; i++) p[i] = a[i].second;
        c[p[0]] = 0;
        for (int i = 1; i < n; i++){
            if (a[i].first == a[i - 1].first) c[p[i]] = c[p[i - 1]];
            else{
                c[p[i]] = c[p[i - 1]] + 1;
            }
        }
        ++k;
    }
    for (auto x: p) cout << x << " ";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int test = 1; //cin >> test;
    while (test--) solve();
    return 0;
}