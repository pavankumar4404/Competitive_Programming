#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long solve(int n, vector<long long> arr) {
    vector<int> pref(n);
    vector<int> suff(n);
    
    pref[0] = arr[0];
    for (int i=1; i<n; i++) {
        pref[i] = gcd(pref[i-1], arr[i]);
    }
    
    suff[n-1] = arr[n-1];
    for (int i=n-2; i >= 0; i--) {
        suff[i] = gcd(suff[i + 1], arr[i]);
    }
    
    int ans = 0;
    for (int i=0; i<n; i++){
        if(i == 0) {
            ans = max(ans, suff[1]);
        } 
        else if(i == n - 1){
            ans = max(ans, pref[n - 2]);
        } 
        else{
            ans = max(ans, gcd(pref[i - 1], suff[i + 1]));
        }
    }    
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<solve(n, arr);
    return 0;
}