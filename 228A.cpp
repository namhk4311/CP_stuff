#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    int cnt = 0;
    vector <int> a(4);
    for (int &x: a) cin >> x;
    for (int i = 0; i < 4; i++){
        for (int j = i + 1; j < 4; j++){
            if (a[i] == a[j]) {
                cnt++;
                break;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}