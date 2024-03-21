#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

// Macros
#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()

#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define inp(x) int x; cin>>x;
#define inpl(x) ll x; cin>>x;
#define inp2(x,y) int x,y; cin>>x>>y;
#define inp2l(x,y) ll x,y; cin>>x>>y;
#define inp3(x,y,z) int x,y,z; cin>>x>>y>>z;
#define inp3l(x,y,z) ll x,y,z; cin>>x>>y>>z;
#define br cout<<'\n';

// Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int,int> mii;
typedef set<int> si;
typedef unordered_map<int,int> umap;
typedef unordered_set<int> useti;
typedef unordered_set<ll> usetl;

void solve(){
    inp(n);
    string s;
    cin>>s;
    int i=0,j=n-1;
    while(i<=j){
        if(s[i]==s[j]){
            cout<<j-i+1;
            return;
        }
        i++,j--;
    }
    cout<<j-i+1;
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