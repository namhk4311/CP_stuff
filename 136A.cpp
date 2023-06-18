#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> friends;
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        int p;
        cin >> p; 
        friends[p] = i;
    }
    for (int i = 1; i <= n; i++){
        cout << friends[i] << " ";
    }
    return 0;
}