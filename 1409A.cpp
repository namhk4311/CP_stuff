#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    int a, b, k;
    cin >> a >> b;
    k = abs(a - b);
    if (!k) cout << k;
    else {
        if (k % 10 > 0){
            cout << k / 10 + 1;
        }
        else cout << k / 10;
    }    
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int test = 1; cin >> test;
    while (test--) solve();
    return 0;
}