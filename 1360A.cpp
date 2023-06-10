#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;

void solve()
{
    int n, min_num = INT_MAX; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            int differ = abs(a[i] - a[j]);
            min_num = min(min_num,differ);
        }
    }
    cout << "result:" << min_num << endl;
}

int main()
{
    int test = 1; cin >> test;
    while (test--) solve();
    return 0;
}