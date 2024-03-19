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
#define inp3(x,y,z) long long x,y,z; cin>>x>>y>>z;
#define br cout<<'\n';

// Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int,int> mii;

void solve(){
    inp3(a,b,c);

    ll ans=a;

    ll mod=b%3;
    if(mod==1){
        c-=2;
        b+=2;
        if(c<0){
            cout<<-1;br;
            return;
        }
    }
    else if(mod==2){
        c-=1;
        b+=1;
        if(c<0){
            cout<<-1;br;
            return;
        }
    }
    ans+=b/3;
    ans+=ceil(double(c)/3);
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