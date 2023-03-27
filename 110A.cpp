#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    ll n; cin >> n;
    ll numdigits = 0, k = 1;
    int digit[1000], cnt = 0; 
    while (n - k >= 0)
    {
        ++numdigits;
        //cout << numdigits << "|" << n - k << endl;
        k *= 10;
    }
    for (int i = numdigits - 1; i >= 0; i--)
    {
        digit[i] = n % 10;
        n /= 10;
    }
    for (int i = 0; i < numdigits; i++)
    {
        if (digit[i] == 4 || digit[i] == 7) cnt++;
    }
    (cnt == 4 || cnt == 7) ? cout << "YES" << endl : cout << "NO" << endl;
    //cout << cnt;
}

int main()
{
    int test = 1; //cin >> test;
    while (test--) solve();
    return 0;
}