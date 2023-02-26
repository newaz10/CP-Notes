#include <bits/stdc++.h>
using namespace std;

#define n 100000000 
int primes[n+1];

// Calculate up to 10^8
void sieve_of_eratosthenes(int primes[])
{
    for(int i = 2; i <= n; i++) {
        primes[i] = 1;
    }

    for(int i = 2; i <= sqrt(n); i++) {
        if(primes[i] == 1) {
            for(int j = 2; i*j <= n; j++) {
                primes[i*j] = 0;
            }
        }
    }

    for(int i = 0; i <= n; i++) {
        if(primes[i] == 1) {
            cout << i << '\n';
        }
    }
}

int main()
{
    sieve_of_eratosthenes(primes);
    cout << '\n';

    return 0;
}
