#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int findMinCost(vector<int>& demand) {
    int n = demand.size();
    vector<int> left(n, 1), right(n, 1);

    for (int i = 1; i < n; ++i) {
        if (demand[i] > demand[i - 1])
            left[i] = left[i - 1] + 1;
        else if (demand[i] == demand[i - 1])
            left[i] = left[i - 1];
    }
    for (int i = n - 2; i >= 0; --i) {
        if (demand[i] > demand[i + 1])
            right[i] = right[i + 1] + 1;
        else if (demand[i] == demand[i + 1])
            right[i] = right[i + 1];
    }
    vector<int> label(n);
    unordered_set<int> unique;

    for (int i = 0; i < n; ++i) {
        label[i] = max(left[i], right[i]);
        unique.insert(label[i]);
    }

    return unique.size();
}

int main() {
    vector<int> demand1 = {100, 85, 93, 106};
    cout << findMinCost(demand1) << endl; // Output: 3

    vector<int> demand2 = {10, 20, 30, 15, 10};
    cout << findMinCost(demand2) << endl; // Output: 3

    return 0;
}
