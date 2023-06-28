#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    int n, result = 0; cin >> n;
    int a[n];
    for (int &x: a) cin >> x;
    if (n < 2) result = 0;
    else {
        sort(a, a + n);
        // for (int i = 0; i < n; i++) cout << a[i] << " ";
        //cout << endl;
        for (int i = 0; i <= (n - 1) / 2; i++){
            result += a[n - i - 1] - a[i];
            //cout << result << endl;
        }
    }
    cout << result << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test = 1; cin >> test;
    while (test--) solve();
    return 0;
}