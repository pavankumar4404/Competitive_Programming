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
#define inp2(x,y) ll x,y; cin>>x>>y;
#define inp3(x,y,z) int x,y,z; cin>>x>>y>>z;
#define br cout<<'\n';

// Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int,int> mii;

void solve(){
    inp2(a,b);
    inp2(c,d);
    ll x=c-a;
    ll y=d-b;

    if(c-a > d-b || b>d){
        cout<<-1;br;
    }
    else{
        cout<<(y-x)+abs(y);br
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