#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MOD = 1000000007;
const int MAX = 100005;

// Function to compute a^b mod MOD
ll power_mod(ll a, ll b, ll mod) {
    ll res = 1;
    a %= mod;
    while(b > 0){
        if(b & 1LL){
            res = res * a % mod;
        }
        a = a * a % mod;
        b >>= 1LL;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    // Precompute factorial and inverse factorial
    vector<ll> factorial(MAX, 1);
    for(int i=1;i<MAX;i++) factorial[i] = factorial[i-1] * i % MOD;
    
    // Compute inverse factorial
    vector<ll> inv_fact(MAX,1);
    inv_fact[MAX-1] = power_mod(factorial[MAX-1], MOD-2, MOD);
    for(int i=MAX-2;i>=0;i--){
        inv_fact[i] = inv_fact[i+1]*(i+1)%MOD;
    }
    
    // Read the string
    string s;
    cin >> s;
    
    // Count frequency of each character
    vector<int> freq(26,0);
    for(char c: s) freq[c - 'a']++;
    
    // Find maximum frequency
    int max_freq = 0;
    for(int c=0;c<26;c++) if(freq[c] > max_freq) max_freq = freq[c];
    
    ll total = 0;
    
    // Iterate over all possible k
    for(int k=1; k<=max_freq; k++){
        ll prod = 1;
        for(int c=0; c<26; c++){
            if(freq[c] >=k){
                // Compute C(freq[c], k)
                ll comb = (factorial[freq[c]] * inv_fact[k] % MOD) * inv_fact[freq[c]-k] % MOD;
                prod = prod * (1 + comb) % MOD;
            }
            else{
                prod = prod * 1 % MOD;
            }
        }
        // Subtract 1 to exclude the empty subset
        prod = (prod + MOD -1) % MOD;
        // Add to total
        total = (total + prod) % MOD;
    }
    
    cout << total;
    
    return 0;
}
