#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    
}

int main()
{
    system("CLS");
    string p1, p2;
    int s1 = 0, s2 = 0, n = 0;
    cin >> p1;
    cin >> p2;
    int k = p1.length();
    for (int i = 0; i < k; i++)
    {
        s1 = p1[i] - 0;
        s2 = p2[i] - 0;
        if (s1 < 91)
        {
            s1 = s1 + 32;
        }
        if (s2 < 91)
        {
            s2 = s2 + 32;
        }
        if (s1 < s2)
        {
            cout << -1;
            break;
        }
        else if (s1 > s2)
        {
            cout << 1;
            break;
        }
        else if (s1 = s2) {++n;}
    }
    if (n == k) {cout << 0;}
    return 0;
}