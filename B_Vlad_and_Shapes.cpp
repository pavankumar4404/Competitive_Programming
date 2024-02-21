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
    int n;
    cin>>n;
    vector<string> arr(n);
    vector<int> cnt(n,0);
    for(int i=0;i<n;i++){
        
        cin>>arr[i];
            // if(arr[i][j]==1){
            //     cnt[i]++;
            // }
        
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // cout<<arr[i][j]<<' ';
            if(arr[i][j]=='1'){
                cnt[i]++;
            }
        }
        // cout<<endl;
    }

    // rep(i,n) cout<<cnt[i]<<' ';

    for(int i=1;i<n;i++){
        if(cnt[i]!=0 && cnt[i]==cnt[i-1]){
            cout<<"SQUARE"<<endl;
            return;
        }
    }

    cout<<"TRIANGLE"<<endl;
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