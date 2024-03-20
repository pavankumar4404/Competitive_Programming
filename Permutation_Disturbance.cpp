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
#define inp2(x,y) int x,y; cin>>x>>y;
#define inp3(x,y,z) int x,y,z; cin>>x>>y>>z;
#define br cout<<'\n';

// Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int,int> mii;

void solve(){
    inp(n);
    vi arr(n);
    rep(i,n){
        cin>>arr[i];
    }

    int ans=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]==i+1){
            ans++;
            swap(arr[i],arr[i+1]);
        }
    }
    if(arr[n-1]==n) ans++;
    cout<<ans;br;

    // int n = sc.nextInt();
		    
	// 	    int arr[]  =new int[n];
		    
	// 	    for(int i=0;i<n;i++){
	// 	        arr[i] = sc.nextInt()-1;
	// 	    }
		    
	// 	   int start = 0;
	// 	   int ans = 0;
		  
	// 	  for(int i=0;i<n-1;i++){
		      
	// 	      if(arr[i]==i){
	// 	          int temp = arr[i+1];
	// 	          arr[i+1] = arr[i];
	// 	          arr[i] = temp;
	// 	          ans++;
	// 	      }
	// 	  }
	// 	  if(arr[n-1]==n-1)
	// 	  ans++;
	// 	    System.out.println(ans);


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