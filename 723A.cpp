#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    int a[3];
    for (int &x: a) cin >> x;
    sort(a, a + 3);
    cout << a[2] - a[0];
    return 0;
}