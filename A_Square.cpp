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
    unordered_map<int,int> mp;
    vector<int> ans;
    for(int i=0;i<4;i++){
        int x,y;
        cin>>x>>y;
        if(mp.find(x)!=mp.end()){
            ans.push_back(abs(mp[x]-y));
        }
        else{
            mp[x]=y;
        }
    }
    cout<<ans[0]*ans[1]<<endl;
    
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