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
    int n=6;
    char c;
    int arr[6]={0};
    for(int i=0;i<n;i++){
        cin>>c;
        if(c=='W'){
            arr[i]=1;
        }
    }
    for(int i=1;i<n-1;i++){
        if(arr[i]==1){
            if(arr[i-1]==arr[i] && arr[i]==arr[i+1]){
                cout<<"Yes"<<endl;
                return ;
            }
        }
    }
    cout<<"No"<<endl;
    
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