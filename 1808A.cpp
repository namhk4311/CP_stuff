#include <bits/stdc++.h>
using namespace std;

int check(int n){
    int max_digit = -INT_MAX, min_digit = INT_MAX;
    //int a[length];
    while (n){
        int k = n % 10;
        max_digit = max(max_digit,k);
        min_digit = min(min_digit,k);
        n /= 10;
    }
    //cout << max_digit << " " << min_digit << endl;
    return max_digit - min_digit;
}

int main()
{
    int t; cin >> t;
    while (t--){
        int l, r, max_lucky = -INT_MAX, max_i = 0; cin >> l >> r;
        if (r - l < 100){
            for (int i = l; i <= r; i++){
                if (max_lucky <= check(i)) {
                    max_i = i; max_lucky = check(i);
                }
            }        
        }
        else {
            for (int i = l; i < r; i++){
                if (i % 100 == 90) {
                    max_i = i;
                    break;
                }
            }
        }
        cout << max_i << endl;
    }
    return 0;
}