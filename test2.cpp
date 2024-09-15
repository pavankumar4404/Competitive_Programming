#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c;
    cin>>c;
    vector<vector<long long>> arr(c, vector<long long>(c));
    for(int i=0; i<c; i++){
        for(int j=0; j<c; j++){
            cin >> arr[i][j];
        }
    }
    long long ans = 0;
    for(int i=0; i<n-1; i++){
        int a = s[i] - 'A';
        int b = s[i+1] - 'A';
        ans += arr[a][b];
    }
    cout << ans;
    return 0;
}