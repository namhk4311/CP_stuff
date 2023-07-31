#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    int q, max_value = -INT_MAX, min_value = INT_MAX, prev; cin >> q;
    bool flag = false, flag2 = false;
    while (q--){
        int n; cin >> n;
        if (!flag){
            flag = true;
            max_value = n;
            min_value = n;
            cout << 1;
            prev = n;
        }
        else if (min_value < n && n < max_value) cout << 0;
        else if (n <= min_value){
            if (prev <= n) {
                cout << 1;
                prev = n;
            }
            else if (!flag2 && max_value > n){
                cout << 1;
                flag2 = true;
                prev = n;
            }
            else cout << 0;
        }
        else if (n >= max_value){
            
            if (!flag2){
                cout << 1;
                max_value = n;
                prev = n;
            }
            else cout << 0;
        }
        
    }
    cout << "\n";
}

int main()
{
    #ifndef ONLINE_JUDGE
       freopen("INP.txt","r",stdin);
       freopen("OUT.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int test = 1; cin >> test;
    while (test--) solve();
    return 0;
}