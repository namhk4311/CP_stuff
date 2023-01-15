#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long int uli;
 
void solve()
{
    
}

int main()
{
    string name;
    getline(cin,name);
    int length = name.length();
    for(int i = 0; i < length; i++)
    {
        if(name[i] = '<')
        {
            name[i] = name[i+1];
            name[i+1] = null;
        }
    }
    cout << name;
    return 0;
}