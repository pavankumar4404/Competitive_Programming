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
    vi arr(n);
    rep(i,n) cin>>arr[i];

    stack<int> st;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        if(arr[i]<=st.top()){
            st.push(arr[i]);
        }
        else{
            int a1=0,b1=0;
            // int a2=0,b2=0;
            if(arr[i]>=10){
                a1=arr[i]/10;
                b1=arr[i]%10;
                if(a1>b1){
                    no;
                    return;
                }
                else{
                    if(st.top()>=10){
                        st.push(b1);
                        st.push(a1);
                    }
                    else{
                        if(b1>st.top()){
                            no;
                            return;
                        }
                        else{
                            st.push(b1);
                            st.push(a1);
                        }
                    }
                }
            }
            else{
                if(st.top()>=arr[i]){
                    st.push(arr[i]);
                }
                else {
                    no;
                    return;
                }
            }
        }
    }
    yes;
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