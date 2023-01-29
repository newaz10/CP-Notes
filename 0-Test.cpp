// If u think u have lost, u lose.
// If u think u have won, u win.

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tci int t; cin >> t; sol;
#define tcs short t; cin >> t; sol;
#define sol while(t--) {solve();}
#define cout(x) cout << x << '\n';
#define YES cout("YES");
#define NO cout("NO");
#define Yes cout("Yes");
#define No cout("No");
#define yes cout("yes");
#define no cout("no");
#define nl cout("");
#define vector(type, v) vector <type> v; 
#define deque(type, d) deque <type> d;
#define pair(type1, type2, p) pair <type1, type2> p;
#define map(type1, type2, m) map<type1, type2> m;
#define set(type, s) set<type> s;
#define pb(val) push_back(val); 
#define pf(val) push_front(val); 
#define pop pop_back();
#define pof pop_front();
#define isSorted(v) is_sorted(v.begin(), v.end());
#define sorta(vec) sort(vec.begin(), vec.end());
#define sortd(vec) sort(vec.begin(), vec.end(), greater<int>());
#define print(vec) for(auto i: vec) {cout << i << ' ';}
#define lower(s)  transform(s.begin(),s.end(),s.begin(),::tolower);
#define upper(s)  transform(s.begin(),s.end(),s.begin(),::toupper);

// Functions
bool prime(ll a) {if(a == 0 || a == 1) return 0; for(int i = 2; i <= round(sqrt(a)); i++) if(a%i == 0) return 0; return 1;}
ll gcd(int a, int b) {if(a == 0) return b; if(b == 0) return a; if(a > b) return gcd((a-b), b); else return gcd(a, (b-a));}

void solve()
{
    cout << gcd(1, 2);nl;
    cout << gcd(2, 2);nl;
    cout << gcd(2, 4);nl;
    cout << gcd(4, 2);nl;
    cout << gcd(3, 3);nl;
    cout << gcd(3, 13);nl;
}

void check()
{
    while(1) {
        solve();
    }
}

int main()
{
    //check();

    FIO;
    tci;

    return 0;
}