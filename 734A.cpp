#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    int n, A = 0, D = 0; cin >> n;
    string s; cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A') A++;
        else D++;
    }
    (A > D) ? cout << "Anton" << endl : ( (A < D) ? cout << "Danik" << endl : cout << "Friendship" << endl ) ; 
}

int main()
{
    int test = 1; //cin >> test;
    while (test--) solve();
    return 0;
}