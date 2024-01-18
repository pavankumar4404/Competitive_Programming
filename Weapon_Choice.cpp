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
    double h,x,y1,y2,k;
    cin>>h>>x>>y1>>y2>>k;
    ll hx=0;
    ll hy=0;
    hx=ceil(h/x);
    if(ceil(h/y1)>k){
        hy=(k+ceil((h-y1*k)/y2));
    }
    else{
        hy=ceil(h/y1);
    }
    cout<<min(hx,hy)<<endl;
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