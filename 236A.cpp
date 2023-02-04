#include <bits/stdc++.h>
using namespace std;

void solve()
{
    set<char> s;
    string x;
    cin >> x; int k = x.length();
    for (int i = 0; i < k; ++i)
    {
        s.insert(x[i]);
    }
    if (s.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else cout << "IGNORE HIM!" << endl;
}

int main()
{
    int test = 1;
    while (test--) solve();
    return 0;
}