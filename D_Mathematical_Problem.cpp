#include <bits/stdc++.h>
using namespace std;

long long calculate(string &s, int l, int r, vector<vector<long long>> &dp, vector<vector<bool>> &computed) {
    if (l == r) return s[l] - '0';
    if (computed[l][r]) return dp[l][r]; 

    long long minValue = LLONG_MAX;
    for (int k = l; k < r; ++k) {
        long long left = calculate(s, l, k, dp, computed);
        long long right = calculate(s, k + 1, r, dp, computed);

        minValue = min(minValue, left + right); 
        minValue = min(minValue, left * right); 
    }

    dp[l][r] = minValue;
    computed[l][r] = true;
    return minValue;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<vector<long long>> dp(n, vector<long long>(n, 0));
    vector<vector<bool>> computed(n, vector<bool>(n, false));

    long long result = calculate(s, 0, n - 1, dp, computed);
    cout << result << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
