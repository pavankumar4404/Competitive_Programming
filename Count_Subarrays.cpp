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

int findAllSubarraysWithGivenSum(vector <int> &arr, int k, unordered_map<ll,int> &mpp) {
    int n = arr.size(); // size of the given array.
    // unordered_map<int,int> mpp;
    ll preSum = 0, cnt = 0;

    // mpp[0] = 1; // Setting 0 in the map.
    for (int i = 0; i < n; i++) {
        // add current element to prefix Sum:
        preSum += arr[i];

        // Calculate x-k:
        int remove = preSum - k;

        // Add the number of subarrays to be removed:
        cnt += mpp[remove];

        // Update the count of prefix sum
        // in the map.
        // mpp[preSum] += 1;
    }
    return cnt;
}

// void print(vector<int>&arr){
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<'\n';
// }

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    unordered_map<ll,int> mpp;
    mpp[0]=1;
    ll ps=0;
    rep(i,n) {
        cin>>arr[i];
        ps+=arr[i];
        mpp[ps]++;
    }


    // vector<int> ans(n);
    // ans[0]=1;
    cout<<1<<" ";
    if(n>1){
        // ans[1]=1;
        cout<<1<<" ";
    }
    else{
        // print(ans);
        // cout<<1<<" ";
        return ;
    }
    for(int i=2;i<n;i++){
        // ps=arr[0]+arr[1];
        ps=0;
        int cnt=0;
        for(int j=0;j<n;j++){
            ps += arr[j];
            int remove = ps - i+1;

            // Calculate x-k:

            // Add the number of subarrays to be removed:
            cnt += mpp[remove];

        }
        cout<<cnt<<" ";
    }
    // print(ans);
}



int32_t main()
{
    fastio()
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        cout<<'\n';
    }
    return 0;
}