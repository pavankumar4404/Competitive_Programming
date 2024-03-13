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

int help(vector<string>& arr, int i, int j, vector<vector<int>>& cost, int n){
    if(i==0 && j==0){
        return (arr[i][j]-'0');
    }
    if(i<0 || j<0) return 2*n;
    if(cost[i][j]!=2*n) return cost[i][j];

    int up=help(arr,i-1,j,cost,n);
    int left=help(arr,i,j-1,cost,n);
    return cost[i][j]=min(up+left,cost[i][j]);
}

void solve(){
    inp(n);
    vector<string> arr(2);
    cin>>arr[0];
    cin>>arr[1];
    vector<vector<int>> cost(2,vector<int>(n,2*n));
    cout<<help(arr,1,n-1,cost,n);br;

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