#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    int n; cin >> n;
    if (n == 3) cout << "NO";
    else {
        cout << "YES\n";
        if (n % 2 == 0) {
            for (int i = 1; i <= n; i++){
                cout << ((i % 2) ? 1 : -1) << " ";
            }
        }
        else {
            int a = (n - 3) / 2, b  = - (n - 1) / 2;
            for (int i = 1; i <= n; i++){
                cout << ((i % 2) ? a : b) << " ";
            }
        }
    } 
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test = 1; cin >> test;
    while (test--) solve();
    return 0;
}