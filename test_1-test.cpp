#include <iostream>
using namespace std;

int main()
{
    int w;
    cout << "weight: ";
    cin >> w;
    if (w == 1 || w == 2) cout << "No";
    else {
    for (int i = 1; i < w; i++)
    {
        if (i % 2 == 0)
        {
            if ((w-i) % 2 == 0)
            {
                cout << "Yes";
                break;
            }
            else
            {
                cout << "No";
                break;
            }
        }
    }
    }
    cout << "\nhi";
    return 0;
}