#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    string s1 = "I hate", s2 = "I love", s3 = "";
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        s3 += ((i % 2) ? s1 : s2);
        if (n > 1 && i < n) s3 += " that ";
        if (i == n) s3 += " it";
    }
    cout << s3 << endl;
    return 0;
}