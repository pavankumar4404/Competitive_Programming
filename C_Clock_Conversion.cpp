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
typedef map<int,int> mii;
typedef set<int> si;
typedef unordered_map<int,int> umii;
typedef unordered_map<char,int> umci;
typedef unordered_set<int> usi;
typedef unordered_set<ll> usll;

void solve(){
    string t;
    cin>>t;
    //  int h=stoi(s.substr(0,2));
    // cout<<h<<endl;
    // string ans="";
    // string ampm="";
    // string hh="";
    // if(h>12){
    //     if(h==10 || h==11 || h==22 || h==23){
    //         h=h-12;
    //         hh=to_string(h);
    //     }
    //     else{
    //         h=h-12;
    //         hh="0";
    //         hh+=to_string(h);
    //     }
    //     ampm=" PM";
    // }
    // else ampm=" AM";
    // ans+=hh;
    // ans.push_back(':');
    // ans+=s.substr(3,2);
    // ans+=ampm;
    // out(ans);

    int hh = stoi(t.substr(0, 2));
    int mm = stoi(t.substr(3, 2));
    string period;
    if (hh < 12) {
        period = "AM";
        if (hh == 0) {
            hh = 12;
        }
    } else {
        period = "PM";
        if (hh > 12) {
            hh -= 12;
        }
    }
    stringstream ss;
    ss << setw(2) << setfill('0') << hh << ":" << setw(2) << setfill('0') << mm << " " << period;
    cout<< ss.str();
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