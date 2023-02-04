#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    int a,b, cnt = 0;
    cin >> a >> b;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        cnt++;
    }
    cout << cnt;
}

int main()
{
    int test = 1;
    while (test--) solve();
    return 0;
}