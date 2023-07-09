#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    char a[3][3];
    set<char> v,h,d1,d2;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            v.insert(a[i][j]);
        }
        if (v.size() == 1){
            auto it = v.begin();
            if (*it == '.') continue;
            cout << *it << endl;
            return;
        }
        v.clear();
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            h.insert(a[j][i]);
        }
        if (h.size() == 1) {
            auto it = h.begin();
            if (*it == '.') continue;
            cout << *it << endl;
            return;
        }
        h.clear();
    }
    for (int i = 0; i < 3; i++){
        d1.insert(a[i][i]);
    }
    auto it1 = d1.begin();
    if (d1.size() == 1 && *it1 != '.'){
        cout << *it1 << endl;
        return;
    }
    for (int i = 0; i < 3; i++){
        d2.insert(a[i][2 - i]);
    }
    auto it2 = d2.begin();
    if (d2.size() == 1 && *it2 != '.'){
        cout << *it2 << endl;
        return;
    }
    //auto it = v.begin();
    //cout << *it << endl;
    cout << "DRAW" << endl;
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