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
    int n=3;
    string a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    int cnta=0;
    int cntb=0;
    int cntc=0;
    for(int j=0;j<n;j++)
        for(int i=0;i<n;i++){
            
            if(a[i]=='A' || b[i]=='A' || c[i]=='A') cnta++;
            if(a[i]=='B' || b[i]=='B' || c[i]=='B') cntb++;
            if(a[i]=='C' || b[i]=='C' || c[i]=='C') cntc++;
            
        }
    // cout<<cnta<<" "<<cntb<<" "<<cntc<<endl;
    if(cnta==6) cout<<"A"<<endl;
    else if(cntb==6) cout<<'B'<<endl;
    else cout<<'C'<<endl;
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