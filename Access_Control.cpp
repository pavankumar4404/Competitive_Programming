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
    int n,x;
    cin>>n>>x;
    string s(n,' ');
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    if(s[0]=='0') {
        cout<<"NO"<<endl;
        return;
    }

    int rem=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1') rem=x;
        else rem--;
        if(rem<0){
            cout<<"NO"<<endl;
            return ;
        }
    }
    cout<<"YES"<<endl;
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