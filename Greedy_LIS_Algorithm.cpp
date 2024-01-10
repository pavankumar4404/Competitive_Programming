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
    int n,x;
    cin>>n>>x;
    if(n==1){
        if(x==0){
            cout<<1<<endl;
            return;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    if(x==0){
        for(int i=1;i<=n;i++){
            cout<<i<<' ';
        }cout<<endl;
        return;
    }
    if(n==2){
        if(x==2){
            cout<<-1<<endl;
            return;
        }
    }
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