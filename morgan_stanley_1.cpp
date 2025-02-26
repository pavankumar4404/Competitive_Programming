#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    unordered_map<int, int> freq;
    
    for (int num : arr) {
        freq[num]++;
    }
    
    int packets = 0;
    
    for (auto &it : freq) {
        auto num = it.first, count = it.second;
        packets += count / 3;
        
        if (count % 3 != 0) {
            packets++;
        }
    }
    cout << packets << endl;
    
    return 0;
}
