#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    vector<int> a;
    long long max_value = -1;    
    for (int i = 0; i < 4; i++){
        long long x;
        cin >> x;
        a.push_back(x);
        max_value = max(x, max_value);
    }
    for (int i = 0; i < 4; i++){
        if (max_value - a[i]) cout << max_value - a[i] << " ";
    }
    return 0;
}