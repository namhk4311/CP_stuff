#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    int n, cnt = 1; cin >> n;
    bool first = true;
    string s, s_pre;
    while (n--){
        cin >> s;      
        if (s != s_pre && !first) ++cnt;
        if (first) first = false;  
        s_pre = s;
    }
    cout << cnt;
    return 0;
}