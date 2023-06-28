#include <bits/stdc++.h>
using namespace std;

bool alphabet[27];

int main()
{
    int n, cnt = 0; cin >> n;
    string s; cin >> s;
    // set<char> p;
    // for (int i = 0; i < n; i++){
    //     if ('A' <= s[i] && s[i] <= 'Z') p.insert(s[i] - 'A' + 'a');
    //     else p.insert(s[i]);
    // }
    // cout << ((p.size() == 26) ? "YES" : "NO") << endl; 
    
    memset(alphabet, false, sizeof(alphabet));
    for (int i = 0; i < n; i++){
        if ('A' <= s[i] && s[i] <= 'Z') alphabet[s[i] - 'A' + 1] = true;
        else alphabet[s[i] - 'a' + 1] = true;
    }

    for (int i = 1; i <= 26; i++){
        if (alphabet[i]) ++cnt;
    }

    cout << ((cnt == 26) ? "YES" : "NO") << endl;
    return 0;
}