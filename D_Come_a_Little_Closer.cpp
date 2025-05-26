#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

// Macros
typedef long long ll;
#define for0(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define rfor(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()
#define vi(arr, n) vector<int> arr(n, 0);
#define vi(arr, n) vector<int> arr(n, 0);
#define vvi(arr, n, m) vector<vector<int>> arr(n, vector<int>(m, 0));
#define vvl(arr, n, m) vector<vector<ll>> arr(n, vector<ll>(m, 0));
#define pb push_back
#define set_bits(x) __builtin_popcountll(x)
#define zero_bits(x) __builtin_ctzll(x)
#define umap unordered_map
#define uset unordered_set
#define inf INT_MAX
#define ninf INT_MIN

// Mathematical functions
const int mod = 1e9+7;
ll factorial(ll n) {if(n==0) return 1; ll res = 1; for (ll i=2; i<=n; i++) res=res*i; return res;}
ll nPr(ll n, ll r) { return factorial(n) / factorial(n - r); }
ll nCr(ll n, ll r) { return factorial(n) / (factorial(r) * factorial(n - r));}
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a * b) / gcd(a, b);}
bool isPrime(ll n) {if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
ll power(ll x, ll y){ll res=1;x=x%mod;if(x==0)return 0;while(y>0){if(y&1)res=(res*x)%mod;y=y>>1;x=(x*x)%mod;}return res;}

// Typedef
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;
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

struct Extremes {
    ll mn1 = 1e18, mn2 = 1e18;   
    ll mx1 = -1e18, mx2 = -1e18;
    int cmn1 = 0, cmx1 = 0;

    void add(ll v) {
        if (v < mn1) { mn2 = mn1; mn1 = v; cmn1 = 1; }
        else if (v == mn1) { ++cmn1; }
        else if (v < mn2) { mn2 = v; }

        if (v > mx1) { mx2 = mx1; mx1 = v; cmx1 = 1; }
        else if (v == mx1) { ++cmx1; }
        else if (v > mx2) { mx2 = v; }
    }

    ll after_min(ll v) const {
        return (v == mn1 && cmn1 == 1) ? mn2 : mn1;
    }
    ll after_max(ll v) const {
        return (v == mx1 && cmx1 == 1) ? mx2 : mx1;
    }
};

void solve(){
    inp(n)
    vector<ll> x(n), y(n);
    if (n == 1) {
        cin >> x[0] >> y[0];
        out(1)
        return;
    }
    Extremes ex, ey;
    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i];
        ex.add(x[i]);
        ey.add(y[i]);
    }
    auto area = [](ll w, ll h) -> ll { return w * h; };
    ll ans = area(ex.mx1 - ex.mn1 + 1, ey.mx1 - ey.mn1 + 1);

    for (int i = 0; i < n; ++i) {
        ll mnx = ex.after_min(x[i]);
        ll mxx = ex.after_max(x[i]);
        ll mny = ey.after_min(y[i]);
        ll mxy = ey.after_max(y[i]);
        ll w  = mxx - mnx + 1;
        ll h = mxy - mny + 1;
        ll box  = area(w, h);
        ll candidate = LLONG_MAX;
        if (box == n - 1){
            candidate = box + min(w, h);
        } 
        else {
            candidate = box;
        }
        ans = min(ans, candidate);
    }
    out(ans)
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