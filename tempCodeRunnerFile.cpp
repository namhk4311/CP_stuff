#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b[50][50];
    for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> b[i][j];
        }
    }

   for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (b[i][j] == 1 && i != 2 && j != 2)
            {
                switch (i)
                {
                    case 0:
                    case 4:
                    {
                        if (j == 0 || j == 4)
                        {
                            cout << 4;
                        }
                        else if (j == 1 || j == 3)
                        {
                            cout << 3;
                        }
                        else cout << 2;
                        break;
                    }
                    case 1:
                    case 3:
                    {
                        if (j == 0 || j == 4)
                        {
                            cout << 3;
                        }
                        else if (j == 1 || j ==3)
                        {
                            cout << 2;
                        }
                        else cout << 1;
                        break;
                    }
                    default:
                    {
                        if (j == 0 || j == 4)
                        {
                            cout << 2;
                        }
                        else cout << 1;
                    }
                }
            }
            else if (b[i][j] == 1 && i == 2 && j == 2)
            {
                cout << 1;
            }
        }
    }

    return 0;
}