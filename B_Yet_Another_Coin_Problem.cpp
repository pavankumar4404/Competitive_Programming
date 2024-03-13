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

ll solve(ll n){
    if(n==0) return 1;
    if(n<0){
        return 0;
    }
    ll c1=solve(n-1);
    ll c3=solve(n-3);
    ll m1=min(c1,c3);
    ll c6=solve(n-6);
    ll m2=min(c6,m1);
    ll c10=solve(n-10);
    ll m3=min(c10,m2);
    ll c15=solve(n-15);
    ll m4=min(c15,m3);
    return m4;
}

void drive(){
    ll n;
    cin>>n;
    cout<<solve(n);br;
}

int32_t main()
{
    fastio()
    int t;
    cin >> t;
    while(t--)
    {
        drive();
    }
    return 0;
}