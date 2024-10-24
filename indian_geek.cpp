#include <bits/stdc++.h>
using namespace std;

string IndianGeek(int N) {
    int k = (N * N + 1) / 2;
    int low = 1, high = N * N;
    
    while (low < high) {
        int mid = (low + high) / 2;
        int count = 0;
        
        for (int i = 1; i <= N; ++i) {
            count += min(mid / i, N);
        }
        
        if (count < k) {
            low = mid + 1;
        } 
        else {
            high = mid;
        }
    }
    
    return to_string(low);
}

int main(){
    int N;
    cin >> N;
    cout << IndianGeek(N) << endl;
    return 0;
}