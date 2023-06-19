#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;

int GCD(int a, int b){
    if (a == 0) return b;
    return GCD(b % a, a);
}

void solve()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        a[i] = abs(a[i] - (i + 1));
    }    
    int result = a[0];
    for (int i = 0; i < n; i++){
        result = GCD(result, a[i]);
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