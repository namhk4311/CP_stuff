#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    int n, cnt = 0; cin >> n;
    string s; cin >> s;
    bool flag = false;
    if (n == 1) {
        cout << 0 << endl;
        return;
    }
    for (int i = 1; i < n; i++){
        if (s[i - 1] == '0' && s[i] == '1' && !flag) {
            flag = true;
        }
        else if (s[i - 1] != s[i]) {
            flag = true;
            ++cnt;
        }
    }
    cout << cnt << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
       freopen("INP.txt","r",stdin);
       freopen("OUT.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int test = 1; cin >> test;
    while (test--) solve();
    return 0;
}