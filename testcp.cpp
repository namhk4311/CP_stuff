#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long int uli;
 
void tamgiacwhile()
{
    int outer = 1;
    while (outer <= 10)
    {
        int inner = 1;
        while (inner <= outer)
        {
            cout << inner << " ";
            inner++;
        }
        outer++;
        cout << endl;
    }
}
void tamgiacfor()
{
    for(int i = 1; i < 10; i++)
    {
        for(int j = 1; j < i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{   
    tamgiacwhile();
    cout << endl;
    tamgiacfor();
    return 0;
}