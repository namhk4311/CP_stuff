#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, p = 0, q = 0;
    int b[100][100];
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (b[i][j] == 1)
            {
                p += 1;
            }
        }
        if (p > 1)
            {
                q += 1;
            }
        p = 0;
    }
    cout << q;
    return 0;
}

  // for (int i = 0; i < N; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << b[i][j] << " ";
    //     }
    //     cout << "\n";
    // }