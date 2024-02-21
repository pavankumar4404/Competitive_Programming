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
    int n=22;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        arr[i]=a+20*b;
    }
    int ans=0;
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            ans=i;
            max=arr[i];
        }
    }
    cout<<ans+1<<'\n';
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