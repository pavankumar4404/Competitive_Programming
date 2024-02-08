#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

// Macros
#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

// Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int,int> mii;

void solve(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int ans=INT_MAX;
    rep(i,n){
        cin>>arr[i];
        if(arr[i]>=k){
            ans=min(ans,arr[i]%k);
        }
    }
    if(ans==INT_MAX) cout<<-1<<endl;
    else cout<<ans<<endl;
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