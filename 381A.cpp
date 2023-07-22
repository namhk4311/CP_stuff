#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    int n; cin >> n;
    int a[n], sum_Seraja = 0, sum_Dima = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    int i = 0, j = n - 1, turn = 1, cnt = n;
    while (cnt--) {
        int sum = 0;
        if (a[i] < a[j]){
            sum += a[j];
            --j;
        }
        else {
            sum += a[i];
            ++i;
        }
        if (turn){
            sum_Seraja += sum;
            turn = 0;
        }
        else {
            sum_Dima += sum;
            turn = 1;
        }
    }
    cout << sum_Seraja << " " << sum_Dima;
}

int main()
{
    #ifndef ONLINE_JUDGE
       freopen("INP.txt","r",stdin);
       freopen("OUT.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int test = 1; //cin >> test;
    while (test--) solve();
    return 0;
}