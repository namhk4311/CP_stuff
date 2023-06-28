#include <bits/stdc++.h>
using namespace std;

bool alphabet[27];

int main()
{
    memset(alphabet, false, sizeof(alphabet));
    string s; getline(cin, s);
    int cnt = 0;
    for (int i = 0; i < s.length(); i++){
        if ('a' <= s[i] && s[i] <= 'z') alphabet[s[i] - 'a' + 1] = true;
    }
    for (int i = 1; i <= 26; i++){
        if (alphabet[i]) ++cnt;
    }
    cout << cnt << endl;
    return 0;
}