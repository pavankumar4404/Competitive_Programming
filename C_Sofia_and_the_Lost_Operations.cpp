#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

// Macros
typedef long long ll;
#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()
#define pb push_back

// Binary
// string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;},
// ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}

// Mathematical functions
#define ll long long
ll factorial(ll n) {if(n==0) return 1; ll res = 1; for (ll i=2; i<=n; i++) res=res*i; return res;}
ll nPr(ll n, ll r) { return factorial(n) / factorial(n - r); }
ll nCr(ll n, ll r) { return factorial(n) / (factorial(r) * factorial(n - r));}
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a * b) / gcd(a, b);}
bool isPrime(ll n) {if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}

// Typedef
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<ll> vl;
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
#define inparr(arr,n) vi arr(n); rep(i,n) cin>>arr[i];
#define inplarr(arr,n) vl arr(n); rep(i,n) cin>>arr[i];
#define br cout<<'\n';
#define out(x) cout<<x;
#define outln(x) cout<<x<<'\n';
#define sz(a) (int)a.size()

bool canTransform(vector<int>& a, vector<int>& b, vector<int>& d) {
    unordered_map<int, int> freq_a, freq_b, freq_d;
    
    for (int num : a) freq_a[num]++;
    for (int num : b) freq_b[num]++;
    for (int num : d) freq_d[num]++;
    
    for (auto it = freq_b.begin(); it != freq_b.end(); ++it) {
        int num = it->first;
        int count_b = it->second;
        
        int available = freq_a[num] + freq_d[num];
        if (available < count_b) {
            return false;
        }
        freq_d[num] = max(0, freq_d[num] - max(0, count_b - freq_a[num]));
    }
    
    return true;
}


void solve(){
    inp(n);
    inparr(a,n);
    inparr(b,n);
    inp(m);
    inparr(d,m);

    // umii mp;
    // for(int i=0;i<m;i++){
    //     mp[d[i]]++;
    // }

    // int changes = 0;
    // for(int i=0;i<n;i++){
    //     if(a[i]!=b[i]) changes++;
    // }

    // if(changes > m) {
    //     no
    //     return;
    // }

    // if(changes == 0 && mp[])

    // for(int i=0;i<n;i++){
    //     if(a[i] != b[i]){
    //         if(mp[b[i]]==0){
    //             no return;
    //         }

    //         mp[b[i]]--;
    //         m--;
    //         if(mp[b[i]]==0) mp.erase(b[i]);
    //     }
    // }
    // if(m % 2 == changes % 2){
    //     yes
    // }
    // else no;

    if(canTransform(a,b,d)) yes
    else no
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