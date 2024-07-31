// #include <iostream>
// #include <string>
// #include <unordered_map>
// #include <vector>

// using namespace std;

// class Solution {
// public:
//     int numberOfSubstrings(string s) {
//         int n = s.size();
//         vector<int> zeros(n + 1, 0);
//         vector<int> ones(n + 1, 0);
        
//         for (int i = 0; i < n; i++) {
//             zeros[i + 1] = zeros[i] + (s[i] == '0');
//             ones[i + 1] = ones[i] + (s[i] == '1');
//         }
//         unordered_map<int, int> mp;
//         mp[0] = 0;
//         int ans = 0;
//         for (int j = 1; j <= n; j++) {
//             int z = zeros[j];
//             int o = ones[j];
//             int key = o - z*z;
//             if (mp.find(key) != mp.end()) {
//                 ans += mp[key];
//             }            
//             mp[key]++;
//         }
//         return ans;
//     }
// };

// int main() {
//     Solution sol;
//     string s = "00011";
//     cout << sol.numberOfSubstrings(s) << endl; // Output: 5

//     s = "101101";
//     cout << sol.numberOfSubstrings(s) << endl; // Output: 16

//     return 0;
// }


#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int countDominantOnes(const string& s) {
    int n = s.length();
    int countOnes = 0, countZeros = 0;
    unordered_map<int, int> countMap; // Map to store prefixDiff counts
    countMap[0] = 1; // Initial condition: one way to have prefixDiff 0
    int dominantCount = 0;

    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            countOnes++;
        } else {
            countZeros++;
        }

        int prefixDiff = countOnes - countZeros * countZeros;

        // Count the number of valid substrings ending at i
        if (countMap.find(prefixDiff) != countMap.end()) {
            dominantCount += countMap[prefixDiff];
        }

        // Update the map with the current prefixDiff
        countMap[prefixDiff]++;
    }

    return dominantCount;
}

int main() {
    string s1 = "00011";
    cout << "Output for s1: " << countDominantOnes(s1) << endl;

    string s2 = "101101";
    cout << "Output for s2: " << countDominantOnes(s2) << endl;

    return 0;
}
