// CF(min 0900) -> Difficulty: 0990 (85) -> Time: 2h 10m -> Tags: 
// CC(min 1000) -> Difficulty: 1265 (30) -> Time: 3h 00m -> Tags: String

// Header
#include <bits/stdc++.h>
using namespace std;

// Type definitions
typedef long long ll;
typedef bool bl;

// First I/O operation
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);

// Test Case for CP
#define tc int t; cin >> t; sol;
#define sol while(t--) {solve();}

// Print functions
#define cout(x) cout << x;
#define sp cout(' ');
#define nl cout('\n');
#define print(x) cout(x) nl;
#define printvs(vec) for(auto &i: vec) {cout(i) sp;} nl;
#define printvn(vec) for(auto &i: vec) {cout(i) nl;}

// Print Yes or No
#define cyes cout("YES");
#define cno cout("NO");
#define Yes cout("Yes");
#define No cout("No");
#define yes cout("yes");
#define no cout("no");

// Debug: 
#define value(x) cout << "The value of " << #x << " is " << x << endl 

// For loop
#define fo(st, n) for(int i = st; i < n; i++)
#define foe(st, n) for(int i = st; i <= n; i++)
#define foer(st, n) for(int i = n-1; i >= st; i--)

// Sort & Reverse
#define isSorted(v) is_sorted(all(v));
#define asort(arr, n) sort(aall(arr, n));
#define asortd(arr, n) sort(aall(arr, n), greater<int>());
#define sorta(vec) sort(vec.begin(), vec.end());
#define sortd(vec) sort(vec.begin(), vec.end(), greater<int>());
#define reverse(v) reverse(v.begin(), v.end());

// String
#define ignore cin.ignore(); 
#define strline(str) getline(cin, str);
#define lower(s)  transform(s.begin(),s.end(),s.begin(),::tolower);
#define upper(s)  transform(s.begin(),s.end(),s.begin(),::toupper);

// Vector, Deque, Pair, Map, Set (have to change)
#define vector(type, v) vector <type> v; 
#define deque(type, d) deque <type> d;
#define pair(type1, type2, p) pair <type1, type2> p;
#define map(type1, type2, m) map<type1, type2> m;
#define set(type, s) set<type> s;
#define umap(type1, type2, m) unordered_map<type1, type2> m;
#define uset(type, s) unordered_set<type> s;
#define mp(type1, type2) make_pair(type1, type2);
#define sz(x) (int((x).size()))
#define pb(val) push_back(val); 
#define pf(val) push_front(val); 
#define pop pop_back();
#define pof pop_front();
#define all(x) x.begin(), x.end()
#define asize(a) (sizeof((a))/sizeof((a[0])))
#define aall(arr, n) arr, arr + n 
#define cl(v) v.clear();
#define fi first
#define se second
#define it(a) for(auto i: a)

// Maximum & Minimum Range
#define imax INT_MAX
#define imin INT_MIN

// Check This
#define int2str(s, n, itos) /*stringstream itos;*/ itos<<n; s= itos.str();//converts a number 'n' to a string 's'
#define str2int(n, s) stringstream stoi(s); stoi>>n;//converts a string 's' to a number 'n'---ONLY ONCE USABLE---
#define eraseSingle(v, pos) v.erase(v.begin()+pos)//Erases an element from "pos' position in zero based index from the vector 'v'
#define eraseRange(v, spos, fpos) v.erase(v.begin()+spos, v.begin()+fpos)//Erases range inclusive spos' to EXCLUSIVE(without) 'fpos' from vector 'v'

//Geometry & Maths
#define distance(x1, y1, x2, y2) sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))

// Const values: 
#define pi 3.1415926535897932384626
#define mod 1000000007

// Functions: 
int leftShift(int value, int time) {return value << time;}
int rightShift(int value, int time) {return value >> time;}
bl prime(ll a) {if(a == 0 || a == 1) return 0; for(int i = 2; i <= round(sqrt(a)); i++) if(a%i == 0) return 0; return 1;}
ll gcd(ll a, ll b) {if(b == 0) return a; return gcd(b, a%b);}
ll lcm(ll a, ll b) {return a/gcd(a,b)*b;}

// Check whether a character is vowel or consonant
bl vc(char c) {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') return true;
    return false;
}

// Code Starts from here...
void solve()
{
    int ar[3] = {2, 1, 3};

    asort(ar, 3);
    printvs(ar);

    asortd(ar, 3);
    printvn(ar);
}

int main()
{
    FIO;
    tc;

    return 0;
}