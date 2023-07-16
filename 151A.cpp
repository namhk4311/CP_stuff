#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int total_bottles = k * l, total_slices = c * d;
    cout << min(total_bottles / nl, min(total_slices, p / np)) / n;
    return 0;
}