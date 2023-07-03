#include <bits/stdc++.h>
#include <algorithm>
//#define ONLINE_JUDGE
using namespace std;
    
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("INP.txt","r",stdin);
        freopen("OUT.txt","w",stdout);
    #endif
    string s1, s2, s1_2, s3;
    cin >> s1 >> s2 >> s3;
    s1_2 = s1 + s2;
    sort(s1_2.begin(), s1_2.end());
    sort(s3.begin(), s3.end());
    cout << ((s1_2 == s3) ? "YES" : "NO");
    return 0;
}