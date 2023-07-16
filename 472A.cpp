#include <bits/stdc++.h>
using namespace std;

bool prime[1000002];

void sieve(int n){
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++){
        if (prime[p]){
            for (int i = p * p; i <= n; i += p){
                prime[i] = false;
            }
        }
    }
}

int main()
{
    int n; cin >> n;
    sieve(n);
    for (int i = 1; i < n; i++){
        if (prime[i] == false && prime[n - i] == false) {
            cout << i << " " << n - i;
            break;
        }
    }
    return 0;
}