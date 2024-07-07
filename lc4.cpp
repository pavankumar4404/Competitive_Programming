#include <bits/stdc++.h>
using namespace std;
bool compareLength(const string& s1, const string& s2) {
    return s1.size() > s2.size();
}

int dfs(int start, int end, const string& target, vector<string>& words, vector<int>& costs, vector<vector<int>>& dp) {
    if (start >= end) return 0;
    if (dp[start][end] != -1) return dp[start][end];

    int minCost = INT_MAX;
    for (const string& word : words) {
        int len = word.size();
        if (len <= end - start && target.substr(start, len) == word) {
            minCost = min(minCost, costs[word.size() - 1] + dfs(start + len, end, target, words, costs, dp));
        }
    }

    return dp[start][end] = (minCost == INT_MAX) ? -1 : minCost;
}

int minCostToFormTarget(string target, vector<string>& words, vector<int>& costs) {
    int n = target.size();
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
    sort(words.begin(), words.end(), compareLength); // Sort words by length in descending order
    return dfs(0, n, target, words, costs, dp);
}

int main() {
    string target = "abcdef";
    vector<string> words = {"abdef", "abc", "d", "def", "ef"};
    vector<int> costs = {100, 1, 1, 10, 5};

    int result = minCostToFormTarget(target, words, costs);
    // Output: 7
    cout<<result<<endl;;

    target = "aaaa";
    words = {"z", "zz", "zzz"};
    costs = {1, 10, 100};

    result = minCostToFormTarget(target, words, costs);
    // Output: -1
    cout<<result<<endl;

    return 0;
}
