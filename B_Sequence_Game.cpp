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
#define br cout<<'\n'

// Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int,int> mii;

void solve(){
    inp(n);
    vi arr(n);
    rep(i,n) cin>>arr[i];
    vi ans;
    ans.push_back(arr[0]);
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            ans.push_back(arr[i]);
            ans.push_back(arr[i]);
        }
        else ans.push_back(arr[i]);
    }
    cout<<ans.size();br;
    rep(i,ans.size()){
        cout<<ans[i]<<' ';
    }
    br;
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