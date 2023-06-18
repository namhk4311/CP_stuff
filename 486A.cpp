#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n, sum = 0, cnt_odd = 0, cnt_even = 0; cin >> n;
    if (n % 2){
        cnt_odd = (n + 1)/2; cnt_even = n - cnt_odd;
    }
    else {
        cnt_even = n / 2; cnt_odd = n - cnt_even;
    }
    sum = -(cnt_odd + (cnt_odd - 1) * cnt_odd) + (cnt_even * 2 + (cnt_even - 1) * cnt_even);
    cout << sum;
}