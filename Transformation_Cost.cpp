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

string decimalToBinary(int n) {
    string binary = "";
    
    // Handle the case when the number is 0 separately
    if (n == 0)
        return "0";
    
    while (n > 0) {
        // Prepend the current least significant bit (LSB) to the binary string
        binary = (n % 2 == 0 ? "0" : "1") + binary;
        
        // Right shift the number by 1 (equivalent to dividing by 2)
        n /= 2;
    }
    
    return binary;
}


void solve(){
    long n;
    cin>>n;
    string bin=decimalToBinary(n);
    // cout<<bin<<endl;
    int bit=bin.length();
    int i=0;
    int j=bin.length()-1;
    while(i<bit){
        if(bin[i+1]=='0'){
            break;
        }
        i++;
    }
    if(bin[j]=='0'){
        while(j>0){
            if(bin[j]=='1'){
                break;
            }
            j--;
        }
    }
    else{
        while(j>0){
            if(bin[j-1]=='0'){
                break;
            }
            j--;
        }
    }
    
    // cout<<i<<' '<<j<<endl;
    if(i>=j) {
        cout<<0<<'\n';
        return;
    }
    long long ans=0;
    for(;i<j;i++){
        if(bin[i]=='0'){
            ans+=(2<<(bit-i));
        }
    }
    cout<<ans<<'\n';
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