#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

// Macros
#define rep(i,j) for(int i=0;i<j;i++)
#define rrep(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

// Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int,int> mii;

void solve(){
    ll n;
    cin>>n;
    int p[n]={0};
    rep(i,n){
        cin>>p[i];
    }

    if(n<=2){
        cout<<-1<<endl;
        return;
    }

    int arr[n]={0};
    ll avg=n+1;
    // avg=even
    if(!(avg&1)){
        for(int i=0;i<n;i++){
            arr[i]=(avg-p[i]);
        }
        rep(i,n){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
    else{
        for(int i=0;i<n;i++){
            if(p[i]%2==0){
                arr[i]=(avg+1-p[i]);
            }
            else{
                arr[i]=(avg-1-p[i]);
            }
        }
        rep(i,n){
            cout<<arr[i]<<" ";
        }cout<<endl;
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