#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

// Macros
#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()

#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define inp(x) int x; cin>>x;
#define inp2(x,y) int x,y; cin>>x>>y;
#define inp3(x,y,z) int x,y,z; cin>>x>>y>>z;
#define br cout<<'\n';

// Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int,int> mii;

void solve(){
    inp(n);
    vector<long long> arr(n);
    rep(i,n){
        cin>>arr[i];
        // sum+=arr[i];
    }

    ll ans=arr[0]*2;
    ll sum=arr[0];

    for(int i=1;i<n;i++){
        ll num=arr[i];
        ll m=num*2;

        ll s2=sum+m;
        if(s2>ans) ans=s2;
        sum+=num;
    }
    cout<<ans;br;
}

int32_t main()
{
    fastio()
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}