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
    // int arr[n];
    ll sum=0;

    rep(i,n){
        int a;
        cin>>a;
        sum+=a;
    }
    ll root=sqrt(sum);
    if(root*root == sum){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

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