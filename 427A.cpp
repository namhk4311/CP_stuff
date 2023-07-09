#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("INP.txt", "r", stdin);
    //     freopen("OUT.txt", "w", stdout);
    // #endif
    int n, cnt = 0; cin >> n;
    stack<int> p;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (!p.empty() && p.top() > 0 && x == - 1){
            int k = p.top() + x;
            p.pop();
            if (k != 0) p.push(k);
        }
        else if (x > 0) p.push(x);
        else ++cnt;
    }
    cout << cnt;
    return 0;
}