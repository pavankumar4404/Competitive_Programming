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
ll factorial(ll n)    {if(n==0) return 1; ll res = 1; for (ll i=2; i<=n; i++) res=res*i; return res;}
ll nPr(ll n, ll r)    { return factorial(n) / factorial(n - r); }
ll nCr(ll n, ll r)    { return factorial(n) / (factorial(r) * factorial(n - r));}
ll gcd(ll a, ll b)    { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b)    { return (a * b) / gcd(a, b);}
ll power(ll a, ll b)  { ll ans = 1; while(b){ if (b&1) ans = (ans*a); a = (a*a); b >>= 1; } return ans; }
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}

//shortcuts
#define yes cout<<"YES";
#define no cout<<"NO";
#define inp(x) int x; cin>>x;
#define inpl(x) ll x; cin>>x;
#define inp2(x,y) int x,y; cin>>x>>y;
#define inp2l(x,y) ll x,y; cin>>x>>y;
#define inp3(x,y,z) int x,y,z; cin>>x>>y>>z;
#define inp3l(x,y,z) ll x,y,z; cin>>x>>y>>z;
#define br cout<<'\n';
#define out(x) cout<<x;
#define outln(x) cout<<x<<'\n';

// Typedef
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int,int> mii;
typedef set<int> si;
typedef unordered_map<int,int> umii;
typedef unordered_map<char,int> umci;
typedef unordered_set<int> usi;
typedef unordered_set<ll> usll;

// void solve(){
    
// }

// int help(int num){
//     string n=to_string(num);
//     int zero=0;
//     for(int i=0;i<n.length();i++){
//         if(n[i]=='0') zero++;
//     }
//     if(zero==1) return 1;
//     return 0;
// }

int32_t main()
{
    fastio()
    // int arr[1000000]={0};
    // int val=0;
    // for(int i=1;i<1000000;i++){
    //     if(i<10){
    //         val++;
    //         arr[i]=val;
    //     }
    //     else{
    //         val+=help(i);
    //         arr[i]=val;
    //     }
    // }
    int t;
    cin >> t;
    while(t--)
    {
        // solve();
        string n;
        cin>>n;
        cout<<9*(n.length()-1)+n[0]-'0';
        br;
    }
    return 0;
}