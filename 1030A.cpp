#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    int n; cin >> n;
    bool easy = true;
    while (n--){
        int k;
        cin >> k;
        if (k == 1) easy = false; 
    }
    cout << ((easy) ? "EASY" : "HARD") << endl;
}

int main()
{
    int test = 1; //cin >> test;
    while (test--) solve();
    return 0;
}