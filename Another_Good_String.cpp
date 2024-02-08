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
    int n,q;
    cin>>n>>q;
    string s(n,' ');
    rep(i,n) cin>>s[i];
    vector<char> arr(q);
    rep(i,q) cin>>arr[i];

    vector<int> ans(q+1);
    pair<char,int> p;
    int max=INT_MIN;
    for(int i=0;i<n;){
        char c=s[i];
        int f=0;
        while(s[i]==c && i<n){
            f++;
            i++;
        }
        p={c,f};
        if(f>=max){
            max=f;
        }
    }
    ans[0]=max;
    // cout<<st.top().first<<" "<<st.top().second<<endl;
    // cout<<p.first<<" "<<p.second<<endl;
    for(int i=0;i<q;){
        char c=arr[i];
        int f=0;
        if(arr[0]==p.first){
            f=p.second;
        }
        while(arr[i]==c && i<q){
            f++;
            i++;
            if(f>max){
                max=f;
            }
            ans[i]=max;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
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