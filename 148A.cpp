#include <bits/stdc++.h>
using namespace std;

bool arr[100001];

int main()
{
    memset(arr, false, sizeof(arr));
    int k, l, m, n, d, cnt = 0;
    cin >> k >> l >> m >> n >> d;
    for (int i = 1; i <= d; i++){
        if (i % k == 0) arr[i] = true;
        else if (i % l == 0) arr[i] = true;
        else if (i % m == 0) arr[i] = true;
        else if (i % n == 0) arr[i] = true; 
    }
    for (int i = 1; i <= d; i++){
        if (arr[i]) cnt++;
    }
    cout << cnt << endl;
    return 0;
}