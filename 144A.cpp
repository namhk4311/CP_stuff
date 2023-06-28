#include <iostream>
using namespace std;
    
int main()
{
    int n, max_val = -INT_MAX, max_idx = 0, min_idx = INT_MAX, min_val = INT_MAX; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (max_val < a[i]){
            max_val = a[i];
            max_idx = i;
        }
        if (min_val >= a[i]){
            min_val = a[i];
            min_idx = i;
        }
    }
    if (max_idx < min_idx) cout << max_idx + (n - 1) - min_idx << endl;
    else if (max_idx > min_idx) cout << max_idx + (n - 2) - min_idx << endl;
    return 0;
}