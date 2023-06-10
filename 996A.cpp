#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;

int bill[5] = {1, 5, 10, 20, 100}, num_bill = 0;

int min_num_bills(int n){
    int i = 4;
    if (n < bill[i]) {
        while (n < bill[i]) {
            i--;
            if (i < 0) return num_bill;
        }
    }
    if (n >= bill[i]){ 
        while (n >= bill[i]){
            ++num_bill;
            n -= bill[i];
            if (i < 0) return num_bill;
        }
        return min_num_bills(n);
    }
    return num_bill;
}

void solve()
{
    int n; cin >> n;
    cout << min_num_bills(n);
}

int main()
{
    int test = 1; //cin >> test;
    while (test--) solve();
    return 0;
}