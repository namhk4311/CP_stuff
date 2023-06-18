#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    int n, q, sum = 0; cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    while (q--){
        int l, r, k, result = sum;
        cin >> l >> r >> k;
        for (int i  = l - 1; i < r; i++){
            result -= a[i];
        }
        result += (r - l + 1)*k;
        //cout << result << endl;
        cout << ((result % 2) ? "YES" : "NO") << "\n";  
    }    
}

int main()
{
    int test = 1; cin >> test;
    while (test--) solve();
    return 0;
}