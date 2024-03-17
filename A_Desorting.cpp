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

void solve(){
    inp(n);
    int arr[n];
    rep(i,n) cin>>arr[i];
    int mind=INT_MAX;
    for(int i=0;i<n-1;i++){

        if(arr[i]>arr[i+1]){
            cout<<0;br;
            return ;
        }
        int diff=arr[i+1]-arr[i];
        mind=min(mind,diff);
    }
    if(mind==0){
        cout<<1;br;
    }
    else{
        cout<<mind/2+1;br;
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