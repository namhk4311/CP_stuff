#include <iostream>
#include <set>
using namespace std;
    
int main()
{
    int n; cin >> n;
    set<int> a;
    int num_a, num_b;
    cin >> num_a;
    for (int i = 0; i < num_a; i++) {
        int x;
        cin >> x;
        a.insert(x);
    }
    cin >> num_b;
    for (int i = 0; i < num_b; i++){
        int x;
        cin >> x;
        a.insert(x);
    }
    cout << ((a.size() == n) ? "I become the guy." : "Oh, my keyboard!") << endl; 
    return 0;
}