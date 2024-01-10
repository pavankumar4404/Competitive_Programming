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
    int n,m;
    cin>>n>>m;
    ll a[n],b[m];
    rep(i,n){
        cin>>a[i];
    }
    int maxb=0;
    rep(i,m){
        cin>>b[i];
        if(b[i]>maxb){
            maxb=b[i];
        }
    }
    sort(a+(n-maxb),a+n);
    rep(i,n){
        cout<<a[i]<<" ";
    }cout<<endl;

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