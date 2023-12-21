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

bool answertoProb(int n){
    // Your code here
    if(n==0) return true;
    if(n<0){
       return false; 
    }
    return answertoProb(n-3)||answertoProb(n-4);
}

int32_t main()
{
    fastio()
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        if(answertoProb(n)) cout<<"yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}