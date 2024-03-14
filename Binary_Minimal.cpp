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
    inp(k);
    string s;
    cin>>s;
    
    int cnt=0;
    rep(i,n) if(s[i]=='1')cnt++;
    if(k<cnt){
        for(int i=0;i<n;i++){
            if( k>0 && s[i]=='1' ){
                s[i]='0';
                k--;
            }
        }
        cout<<s;br;
    }
    else{
        for(int i=0;i<n-k;i++){
            cout<<'0';
        }br;
    }
    // cout<<s;br
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