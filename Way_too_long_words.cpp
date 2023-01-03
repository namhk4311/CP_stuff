#include <bits/stdc++.h>
using namespace std;

void checkint(string a)
{
    stringstream ss;
    int num;
    ss << a;
    ss >> num;
    if ( isdigit(num) == 0 )
    {
        exit(3);
    }
    else {cout << a;}
}

int main()
{
    int n, lth;
    string x, k, t;
    cout << "Nhap: ";
    getline(cin,x);
    lth = x.length();
    if (lth < 10)
    {
        checkint(x);
    }
    else 
    {
         t = to_string(lth-2);
        k = x[0] + t + x[lth-1]; 
        cout << k;
    }
}