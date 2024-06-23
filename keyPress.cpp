#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.size();
    int ans = 0;
    int i = 0;
    while(i<n){
        if(s[i] == '0'){
            if(i+1<n && s[i+1] == '0')
                i++;
        }
        ans++;
        i++;
    }
    cout<< ans<<endl;
    return 0;
}