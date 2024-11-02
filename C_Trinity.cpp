#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if the top `k` elements can form valid triangles
bool can_form_triangles(const vector<int>& a, int k) {
    if (k < 3) return false; // Need at least 3 elements to form a triangle
    // Check if any three elements in the top k can form a valid triangle
    for (int i = 0; i < k - 2; ++i) {
        if (a[i] + a[i + 1] > a[k - 1]) {
            return true;
        }
    }
    return false;
}

int min_operations_to_form_triangles(vector<int>& a) {
    sort(a.begin(), a.end());
    int n = a.size();
    
    // Binary search for the minimum k that can form valid triangles
    int left = 3, right = n;
    while (left < right) {
        int mid = (left + right) / 2;
        if (can_form_triangles(a, mid)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    
    // The number of operations needed is n - left
    return n - left;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << min_operations_to_form_triangles(a) << endl;
    }
    
    return 0;
}