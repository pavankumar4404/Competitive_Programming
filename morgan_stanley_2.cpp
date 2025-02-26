#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int maxProfit(vector<int>& stocks) {
    map<int, int> freq;
    
    for (int profit : stocks) {
        freq[profit]++;
    }

    vector<int> arr;
    for (auto &it : freq) {
        auto p = it.first;
        arr.push_back(p);
    }

    int n = arr.size();
    vector<int> dp(n, 0);

    for (int i = 0; i < n; i++) {
        int cur = arr[i] * freq[arr[i]];
        if (i == 0) {
            dp[i] = cur;
        } 
        else if (arr[i] == arr[i - 1] + 1) {
            dp[i] = max(dp[i - 1], cur + (i >= 2 ? dp[i - 2] : 0));
        } 
        else {
            dp[i] = dp[i - 1] + cur;
        }
    }

    return dp[n - 1];
}

int main() {
    int n;
    cin >> n;
    vector<int> stocks(n);
    for (int i = 0; i < n; i++) {
        cin >> stocks[i];
    }
    
    cout << maxProfit(stocks) << endl;
    return 0;
}
