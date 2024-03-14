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
    string s(n,' ');
    rep(i,n) cin>>s[i];
    
    int cnt0=0;
    int cnt1=0;
    int maxc=0;
    for(int i=0;i<n;){
        if(s[i]=='1'){ 
            cnt1++;
            i++;
            cnt0=0;
        }
        // else if(s[i]=='0' && s[i+1]=='0'){
        //     cnt0++;
        //     maxc=max(cnt0,maxc);
        // }
        else{
            while(s[i]=='0'){
                cnt0++;
                i++;
            }
            maxc=max(cnt0,maxc);
        }
    }
    // if(s[n-1]=='1') cnt1++;
    // else{
    //     cnt0++;
    //     maxc=max(maxc,cnt0);
    // }
    cout<<maxc+cnt1;br;
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