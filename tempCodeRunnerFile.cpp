#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, lth;
    string word, k;
    cout << "Nhap: ";
    getline(cin,word);
    lth = word.length();
    if (lth >= 10)
    {
        string t = to_string(lth);
        string k = word[0] + t + word[lth-1]; 
        cout << k;
    }
    return 0;
