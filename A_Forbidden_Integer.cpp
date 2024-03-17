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
    inp3(n,k,x);

    if(k==1){
        no;
        return;
    }
    if(x!=1){
        yes;
        cout<<n;br
        rep(i,n) cout<<1<<' '; 
        br;
        return;
    }
    if(k==2){
        if(n%2==0){
            yes;
            cout<<n/2;br
            rep(i,n/2) cout<<2<<' ';
            br
            return;
        }
        else {
            no;
            return;
        }
    }

    yes;
    if(n%2==0){
        
        cout<<n/2;br;
        rep(i,n/2) cout<<2<<' ';
        br;
        return;
    }

    cout<<n/2;br
    rep(i,n/2-1) cout<<2<<" ";
    cout<<3;
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