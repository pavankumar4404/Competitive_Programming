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
    vi arr(n);
    rep(i,n)cin>>arr[i];

    sort(all(arr));
    int idx=ceil(double(n)/2)-1;
    int num=arr[idx];
    int ans=0;
    while(num==arr[idx] && idx<n){
        idx++;
        ans++;
    }
    cout<<ans;
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