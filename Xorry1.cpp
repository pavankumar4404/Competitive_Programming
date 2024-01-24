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

ll Opposite(ll n)
    {
        ll x = 1;
        while (x <= n) {
            x <<= 1;
        }
        x--;
        return (x ^ n);
    }

void solve(){
    ll x;
    cin>>x;

    ll right=log2(x);
    // ll right=(x&(x-1));
    // cout<<right<<

    ll left=x-right;

    // ll diff=right-left;

    // cout<<~x<<endl;
    // ll opp=Opposite(x);
    // cout<<opp<<endl;

    // if(diff>(abs(opp-x))) cout<<min(opp,x)<<" "<<max(opp,x)<<endl; 
    // else{
    cout<<left<<" "<<pow(2,(right))<<endl;

        
    // }
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