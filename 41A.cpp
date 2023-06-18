#include <bits/stdc++.h>
using namespace std;

string translation(string s){
    string s_trans = "";
    int length = s.length();
    for (int i = length - 1; i >= 0; i--){
        s_trans += s[i];
    }
    return s_trans;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << ((translation(s1) == s2) ? "YES" : "NO") << endl;
    return 0;
}