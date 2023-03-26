#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        if (n % 10 == 0)
        {
            n /= 10;
        }
        else if (n % 10 != 0)
        {
            n -= 1; 
        }
    }
    cout << n << endl;
}

int main()
{
    int test = 1; //cin >> test;
    while (test--) solve();
    return 0;
}