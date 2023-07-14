#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    string s, a = "", b = "", c = "", b1 = ""; cin >> s;
    if ((s[0] == 'a' && s[1] == 'a') || (s[0] == 'b' && s[1] == 'b') || (s[0] == 'b' && s[1] == 'a')){
        a += s[0]; b += s[1];
        int i = 2;
        while (i < s.length()){
            c += s[i++];
        }
    }
    else if (s[0] == 'a' && s[1] == 'b'){
        a += s[0];
        int i = 1;
        while (s[i] != 'a' && i < s.length()){
            b += s[i++];
        }
        if (i == s.length()) {
            a = "";
            b = "";
            for (int j = 0; j <= s.length() - 3; j++) a += s[j];
            b += s[s.length() - 2];
            c += s[s.length() - 1];
        }
        else {
            while (i < s.length()){
                c += s[i++];
            }
        }
    }
    else {
        cout << ": (";
        return;
    }
    cout << a << " " << b << " " << c << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int test = 1; cin >> test;
    while (test--) solve();
    return 0;
}