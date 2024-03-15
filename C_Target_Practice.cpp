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
    int n=10;
    vector<string> arr(10);
    for(int i=1;i<=10;i++){
        string s(10,' ');
        for(int j=0;j<10;j++){ 
            cin>>s[j];
        }
        arr[i-1]=s;
    }
    int ans=0;
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(arr[i-1][j-1]=='X'){
                ans+=min(min(i,10-i+1),min(j,10-j+1));
            }
        }
    }
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