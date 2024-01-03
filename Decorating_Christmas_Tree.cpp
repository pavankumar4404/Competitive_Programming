#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

// Macros
#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()

// Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int,int> mii;

void solve()
{
    int n,x,y;
    cin>>n>>x>>y;
    int req=n;
    int small=y/3;
    int large;
    if(small<=x){
        large=x-small;
        req-=small;
        large=large/2;
        req-=large;
        // cout<<req<<endl;
        if(req<=0){
            cout<<"YES"<<endl;
            return ;
        }
        else{
            cout<<"NO"<<endl;
            return ;
        }
    }
    small=min(small,x);
    req-=small;
    large=x-small;
    large=large/2;
    req-=large;
    if(req<=0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return;
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