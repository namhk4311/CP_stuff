#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0; cin >> n;
    while (n--){
        string inp; cin >> inp;
        if (inp == "Tetrahedron") sum += 4;
        else if (inp == "Cube") sum += 6;
        else if (inp == "Octahedron") sum += 8;
        else if (inp == "Dodecahedron") sum += 12;
        else if (inp == "Icosahedron") sum += 20;
    }
    cout << sum;
    return 0;
}