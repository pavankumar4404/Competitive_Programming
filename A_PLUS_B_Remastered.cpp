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
    int n;
    cin>>n;
    int a[n],b[n];
    rep(i,n){
        cin>>a[i];
    }
    rep(i,n){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n,greater<int>());
    for(int i=1;i<n;i++){
        if((a[i]+b[i])!=(a[i-1]+b[i-1])){
            cout<<-1<<endl;
            return ;
        }
    }
    rep(i,n){
        cout<<a[i]<<" ";
    }cout<<endl;
    rep(i,n){
        cout<<b[i]<<" ";
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