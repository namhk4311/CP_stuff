#include <bits/stdc++.h>
using namespace std;

void pro1()
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
            if (b[i][j] == 1)
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
                    case 2:
                    {
                        if (j == 0 || j == 4)
                        {
                            cout << 2;
                        }
                        else if (j == 1 || j == 3)
                        {
                            cout << 1;
                        }
                        else cout << 0;
                        break;
                    }
                }
            }
        }
    }
}

void pro2()
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
            if (b[i][j] == 1)  cout << abs(i-2) + abs(j-2);
        }
    }
}

int main()
{
    pro2();
}