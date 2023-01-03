#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n, lth, p;
    string x, k, t;
    cout << "Nhap: ";
    getline(cin,x);
    p = stoi(x);
    lth = x.length();
    if (lth >= 10)
    {
        t = to_string(lth-2);
        k = x[0] + t + x[lth-1]; 
        cout << k;
    }
    else if (lth < 10 && p != 0) 
    {
        return 0;
    }
    else cout << x;

}