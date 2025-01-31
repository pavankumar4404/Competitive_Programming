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

void solve(){
    inp(n)
    inplarr(arr, n)
    unordered_map<int, int> mp;
    int cnt = 0;
    int num = -1;
    for0(i,n){
        mp[arr[i]]++;
        if(mp[arr[i]] >= 2 && arr[i] != num){
            cnt++;
            if(cnt == 2){
                out(num<<' ')
                out(num<<' ')
                out(arr[i]<<' ')
                out(arr[i])
                return;
            }
            num = arr[i];
        }
        if(mp[arr[i]] >= 4){
            out(arr[i]<<' ')
            out(arr[i]<<' ')
            out(arr[i]<<' ')
            out(arr[i])
            return;
        }
    }
    if(cnt == 0) {
        out(-1)
        return;
    }
    vector<int> nums;
    for(auto &it:mp){
        if(it.second == 1 || it.second == 3) nums.push_back(it.first);
    }
    sort(all(nums));
    for(int i=1; i<sz(nums); i++){
        if(abs(nums[i] - nums[i-1]) < 2*num){
            out(num<<' ')
            out(num<<' ')
            out(nums[i-1]<<' ')
            out(nums[i])
            return;
        }
    }
    out(-1)
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
};