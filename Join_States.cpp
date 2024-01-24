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
    int n,m;
    cin>>n>>m;
    int arr[n];
    int size=n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=0;
    ll sum=0;
    vector<ll> ans;
    while(i<n){
        sum+=arr[i];
        if(sum>=m){
            ans.push_back(1);
            sum=0;
        }
        i++;
    }
    cout<<ans.size()<<endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n];
        int size=n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int i=0;
        ll sum=0;
        vector<ll> ans;
        while(i<n){
            sum+=arr[i];
            if(sum>=m){
                ans.push_back(1);
                sum=0;
            }
            i++;
        }
        cout<<ans.size()<<endl;
    }
    return 0;
}