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
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(n);
    vector<int> b(m);
    set<int> sa;
    set<int> sb;
    rep(i,n){ 
        cin>>a[i];
        // if(sa.size()<k/2)
        sa.insert(a[i]);
    }
    rep(i,m) {
        cin>>b[i];
        // if(sb.size()<k/2)
        sb.insert(b[i]);
    }
    int arr[k+1]={0};
    if(sa.size()<k/2 || sb.size()<k/2){
        cout<<"NO"<<'\n';
        return;
    }

    int idx=0;
    for(auto it:sa){
        // if(idx==k/2){
        //     break;
        // }
        if(it>k){
            break;
        }
        arr[it]++;
        // cout<<it<<" ";
    }
    for(auto it:sb){
        // if(idx==k){
        //     break;
        // }
        if(it>k){
            break;
        }
        arr[it]++;
        // cout<<it<<" ";
    }

    // vector<int> x(sa.begin(),sa.end());
    
    // vector<int> y(sb.begin(),sb.end());

    // for(int i=0;i<k/2;i++){
    //     if(x[i]<k && y[i]<k && x[i]!=y[i]){
    //         arr[x[i]]++;
    //         arr[y[i]]++;
    //     }else{
    //         cout<<"NO"<<'\n';
    //         return;
    //     }
    // }
    for(int i=1;i<=k;i++){
        if(arr[i]<1){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<'\n';
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