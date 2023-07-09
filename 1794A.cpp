#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;

void solve()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        a[i]++;
    }    
    for (int i = 1; i < n; i++){
        if (a[i] % a[i - 1] == 0) ++a[i];
    }
    for (int x: a) cout << x << " ";
    cout << endl;
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