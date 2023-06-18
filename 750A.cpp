#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;

int num_problem(int n, int remain){
    int res = 0, max_problem = 0;
    for (int i = 1; i <= n && res + 5*i <= remain; i++){
        res += 5*i;
        max_problem = i;
    }
    return max_problem;
};

void solve()
{
    int n, k; cin >> n >> k;
    cout << num_problem(n, 240 - k);
}

int main()
{
    int test = 1; //cin >> test;
    while (test--) solve();
    return 0;
}