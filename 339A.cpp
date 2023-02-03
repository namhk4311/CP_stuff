#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string S,t;
    int n[100];
    cin >> S;
    int k = S.length();
    for (int i = 0; i < k; i += 2)
    {
        n[i/2] = S[i] - '0'; 
    }
    for (int i = 0; i < (k+1)/2; i++) // Sort '1'
    {
        if (n[i] == 1)
        {
            t += '1';
            if (t.length() < k) 
            {
                t += '+';
            }
        }
    }
    for (int i = 0; i < (k+1)/2; i++) // Sort '2'
    {
        if (n[i] == 2)
        {
            t += '2';
            if (t.length() < k) 
            {
                t += '+';
            }
        }
    }
    for (int i = 0; i < (k+1)/2; i++) // Sort '3'
    {
        if (n[i] == 3)
        {
            t += '3';
            if (t.length() < k) 
            {
                t += '+';
            }
        }
    }
    cout << t;
}