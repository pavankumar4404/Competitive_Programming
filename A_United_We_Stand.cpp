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
    vi arr(n);
    rep(i,n){
        cin>>arr[i];
    }
    sort(all(arr));
    if(arr[0]==arr[n-1]){
        cout<<-1;br;
        // return;
    }
    else{
        vi b={arr[0]};
        vi c;
        int i=1;
        while(arr[i]==arr[0]){
            b.push_back(arr[i]);
            i++;
        }
        while(i<n){
            c.push_back(arr[i]);
            i++;
        }
        cout<<b.size()<<' '<<c.size();br;
        rep(i,b.size()) cout<<b[i]<<' ';
        br;
        rep(i,c.size()) cout<<c[i]<<' ';
        br;
        
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