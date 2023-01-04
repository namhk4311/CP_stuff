#include <bits/stdc++.h>
using namespace std;

int main()
{
    int lth,n;
    string word;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> word;
        lth = word.length();
        if (lth <= 10)
        {
            cout << word << endl;
        }
        else 
        {
            cout << word[0] << lth - 2 << word[lth-1] << endl;
        }
    }
}