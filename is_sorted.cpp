#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {1, 2, 3, 4, 5, 6, 7};

    if(is_sorted(v.begin(), v.end())) {
        cout << "Sorted\n";
    }
    else {
        sort(v.begin(), v.end());
    }
}
