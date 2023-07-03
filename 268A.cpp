#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0; cin >> n;
    vector<pair<int,int>> a;
    for (int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        a.push_back(make_pair(x, y));
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j) continue;
            else {
                if (a[i].first == a[j].second) ++cnt;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}