#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    string result = "";
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            char s; cin >> s;
            if ('a' <= s && s <= 'z') result += s;
        }
    }
    cout << result << endl;
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