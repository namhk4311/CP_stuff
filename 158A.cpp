#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, p, t = 0, a[100]; //t: counter; p: k-th place finisher's score; a: score
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if (i == k)
        {
            p = a[i];
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        if (p == 0)
        {
            if (a[i] > 0)
            {
                ++t;
            }           
        }
        if (a[i] >= p && p != 0)
        {
            ++t;
        }
    }
    cout << t;
    return 0;
}
