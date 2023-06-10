#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    int n, h;
    cin >> n >> h;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int min_length = 0;
    for (int i = 0; i < n; i++){
        (a[i] <= h) ? min_length++ : min_length += 2;
    }
    cout << min_length;
}

int main()
{
    int test = 1; //cin >> test;
    while (test--) solve();
    return 0;
}