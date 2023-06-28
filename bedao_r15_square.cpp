#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long double x)
{
    if (x >= 0) {
        long long sr = sqrt(x);
        //cout << sr << endl;
        return (sr * sr == x);
    }
    return false;
}

int main()
{
    int n; cin >> n;
    bool ok = false;
    int a[n];
    while (!ok){
        srand(time(NULL));
        int sum = 0;
        for (int i = 0; i < n; i++){
            a[i] = rand() % 10;
            sum += a[i];
        }
        ok = isPerfectSquare(sum);
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}