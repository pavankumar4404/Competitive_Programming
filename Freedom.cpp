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
    vector<long double> arr(n);
    unordered_map<long double,ll> mp;
    ll ans=0;
    rep(i,n){
        cin>>arr[i];
    }
    mp[arr[0]]++;
    for(int i=1;i<n;i++){
        long double j=arr[i]*3/(arr[i]-1);
        ll r=static_cast<ll>(j);
        if(j==r){
            ans+=mp[r];
        }
        mp[arr[i]]++;
    }
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         ll a=arr[i]-arr[j];
    //         ll b=arr[i]+arr[j];
    //         ll c=arr[i]*arr[j];

    //         if(b-a == c-b){
    //             ans++;
    //         }
    //     }
    // }
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