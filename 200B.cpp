#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n; cin >> n;
    double total_percent = 0.0;
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        total_percent += x/(double)100;
    }
    cout << total_percent * 100 / n  << endl;
    return 0;
}