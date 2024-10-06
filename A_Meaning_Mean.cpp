#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

// Macros
typedef long long ll;
#define for0(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<n;i++)
#define rfor(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()
#define vi(arr, n) vector<int> arr(n, 0);
#define vi(arr, n) vector<int> arr(n, 0);
#define vvi(arr, n, m) vector<vector<int>> arr(n, vector<int>(m, 0));
#define vvl(arr, n, m) vector<vector<ll>> arr(n, vector<ll>(m, 0));
#define pb push_back

// Binary
// string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;},
// ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}

// Mathematical functions
int mod = 1e9+7;
ll factorial(ll n) {if(n==0) return 1; ll res = 1; for (ll i=2; i<=n; i++) res=res*i; return res;}
ll nPr(ll n, ll r) { return factorial(n) / factorial(n - r); }
ll nCr(ll n, ll r) { return factorial(n) / (factorial(r) * factorial(n - r));}
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a * b) / gcd(a, b);}
bool isPrime(ll n) {if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
ll power(ll x, ll y){ll res=1;x=x%mod;if(x==0)return 0;while(y>0){if(y&1)res=(res*x)%mod;y=y>>1;x=(x*x)%mod;}return res;}

// Typedef
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ll> vl;
typedef vector<vector<ll>> vvl;
typedef map<int,int> mii;
typedef set<int> si;
typedef unordered_map<int,int> umii;
typedef unordered_map<char,int> umci;
typedef unordered_set<int> usi;
typedef unordered_set<ll> usll;

//shortcuts
#define yes cout<<"YES";
#define no cout<<"NO";
#define inp(x) int x; cin>>x;
#define inpl(x) ll x; cin>>x;
#define inp2(x,y) int x,y; cin>>x>>y;
#define inp2l(x,y) ll x,y; cin>>x>>y;
#define inp3(x,y,z) int x,y,z; cin>>x>>y>>z;
#define inp3l(x,y,z) ll x,y,z; cin>>x>>y>>z;
#define inpstr(s) string s; cin>>s;
#define inparr(arr,n) vi arr(n); for0(i,n) cin>>arr[i];
#define inplarr(arr,n) vl arr(n); for0(i,n) cin>>arr[i];
#define print(arr) for0(i,arr.size()) cout<<arr[i]<<' ';
#define br cout<<'\n';
#define out(x) cout<<x;
#define outln(x) cout<<x<<'\n';
#define sz(a) (int)a.size()

void solve(){
    inp(n)
    inplarr(arr, n)
    sort(all(arr));
    multiset<ll> s;
    for(int i=0;i<=n-1; i++){
        s.insert(arr[i]);
    }
    while(s.size() > 1){
        ll a = *s.begin();
        auto it = s.begin();
        ll b = *(++it);
        s.erase(s.begin());
        s.erase(it);
        ll c = (a + b)/2;
        s.insert(c);
    }
    // ll x = *s.begin();
    // ll c = floor((arr[n-1] + x)/2);
    out(*s.begin())
}

int32_t main()
{
    fastio()
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        br;
    }
    return 0;
}