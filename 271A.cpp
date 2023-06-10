#include <bits/stdc++.h>
using namespace std;
 
const int inf = 2e9 + 7;
typedef long long ll;
typedef unsigned long int uli;

int digit[4];

int digit_check(int dig){
    int cnt = 0, copy = dig;
    while (copy != 0){
        digit[cnt] = copy % 10;
        copy /= 10;
        ++cnt;
    }
    if (digit[0] == digit[1]) return digit_check(++dig);
    else if (digit[0] == digit[2]) return digit_check(++dig);
    else if (digit[0] == digit[3]) return digit_check(++dig);
    else if (digit[1] == digit[2]) return digit_check(++dig);
    else if (digit[1] == digit[3]) return digit_check(++dig);
    else if (digit[2] == digit[3]) return digit_check(++dig);
    
    return dig;
}

void solve()
{
    int y; cin >> y;
    y++;
    cout << digit_check(y); 
}

int main()
{
    int test = 1; //cin >> test;
    while (test--) solve();
    return 0;
}