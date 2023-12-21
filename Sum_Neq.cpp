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
    int arr[n];
    rep(i,n){
        cin>>arr[i];
    }
    if(n==4){
        if(arr[0]+arr[1]==arr[2]+arr[3]){
            cout<<"NO"<<endl;
            return ;
        }
        cout<<"YES"<<endl;
    }
    else{
        bool allsame=true;
        int temp=arr[0];

        rep(i,n){
            if(arr[i]!=temp){
                allsame=false;
                break;
            }
        }
        if(allsame){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
        return ;
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
