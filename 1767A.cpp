#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 
int solveX(long long int a[100][100])
{
    int p, t;
    if ((a[0][0] <= a[1][0] && a[1][0] <= a[2][0]) || (a[2][0] <= a[1][0] && a[1][0] <= a[0][0]))
    {
        p = a[1][0];
        if ((a[2][0] - p)*(a[0][0]-p) < 0)
        {
            t = 1;
        }
        else t = 0;
    }
    else if ((a[1][0] <= a[2][0] && a[2][0] <= a[0][0]) || (a[0][0] <= a[2][0] && a[2][0] <= a[1][0]))
    {
        p = a[2][0];
        if ((a[1][0] - p)*(a[0][0]-p) < 0)
        {
            t = 1;
        }
        else t = 0;
    }
    else if ((a[2][0] <= a[0][0] && a[0][0] <= a[1][0]) || (a[1][0] <= a[0][0] && a[0][0] <= a[2][0]))
    {
        p = a[0][0];
        if ((a[2][0] - p)*(a[1][0]-p) < 0)
        {
            t = 1;
        }
        else t = 0;
    }
    else t = 0;
    return t;
}

int solveY(long long int a[100][100])
{
    int p, t;
    if ((a[0][1] <= a[1][1] && a[1][1] <= a[2][1]) || (a[2][1] <= a[1][1] && a[1][1] <= a[0][1]))
    {
        p = a[1][1];
        if ((a[0][1] - p)*(a[2][1]-p) < 0)
        {
            t = 1;
        }
        else t = 0;
    }
    else if ((a[1][1] <= a[2][1] && a[2][1] <= a[0][1]) || (a[0][1] <= a[2][1] && a[2][1] <= a[1][1]))
    {
        p = a[2][1];
        if ((a[1][1] - p)*(a[0][1]-p) < 0)
        {
            t = 1;
        }
        else t = 0;
    }
    else if ((a[2][1] <= a[0][1] && a[0][1] <= a[1][1]) || (a[1][1] <= a[0][1] && a[0][1] <= a[2][1]))
    {
        p = a[0][1];
        if ((a[2][1] - p)*(a[1][1]-p) < 0)
        {
            t = 1;
        }
        else t = 0;
    }
    else t = 0;
    return t;
}

int main()
{
    ll z[100][100]; 
    int k;
    cin >> k;
    for (int m = 0; m < k; m++)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> z[i][j];
            }
        }
        if ((solveX(z) == 1) || (solveY(z) == 1))
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}