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
    int n;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    
    string ans(n,'P');
    
    int req=n/2+1;

    for(char i:s){
        if(i=='R'){
            req--;
        }
    }
    for(int i=n-1;i>=0 && req>0;i--){
        if(s[i]=='R') continue;
        if(s[i]=='S') ans[i]='R';
        else if(s[i]=='P') ans[i]='S';
        req--;
    }
    cout<<ans<<endl;
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