#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int x = 0;
    string state;
    for (int i = 0; i < n; i++)
    {
        cin >> state;
        if (state == "++X" || state == "X++")
        {
            x += 1;
        }
        else if (state == "--X" || state == "X--")
        {
            x -= 1;
        }
    }
    cout << x;
    return 0;
}