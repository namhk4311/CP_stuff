#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    string s1, s2 = ""; cin >> s1; 
    for (int i = 0; i < s1.length(); i++){
        if (i % 2 == 0 && s1[i] == s1[i - 1] && i > 0) continue;
        s2 += s1[i];
    }   
    cout << s2 << endl;
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