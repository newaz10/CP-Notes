#include <bits/stdc++.h>
using namespace std;

#define cout(x) cout << x << endl;

long int gcd(int a, int b)
{
    if(a == 0) {
        return b;
    }
    if(b == 0) {
        return a;
    }
    if(a > b) {
        return gcd((a-b), b);
    }
    else {
        return gcd(a, (b-a));
    }
}

int main()
{
    int m, n;
    cin >> m >> n;

    cout(gcd(m, n));
}
