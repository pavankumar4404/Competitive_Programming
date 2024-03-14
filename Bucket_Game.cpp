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

    int one=0;
    int two=0;
    int gr=0;

    rep(i,n){
        inp(b);
        if(b==1) one++;
        else{
            if(b==2){
                two++;
            }
            else{
                gr+=b-2;
                two++;
            } 
        }
    }

    int x=0;
    int y=0;
    x+=(one+1)/2;
    y+=one/2;
    bool f=0;
    f=one%2;
    if(f){
        if(gr%2==1) f=0;
    }
    else{
        if(gr%2==1) f=1;
    }
    if(f) x+=two;
    else y+=two;

    if(x>y) cout<<"Alice";

    else if(y>x) cout<<"Bob";
    
    else cout<<"Draw";
    br;

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