#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        unordered_map<char, int> first_occurrence;
        int result = 0;

        for (int i = 0; i < n; ++i) {
            char current_char = s[i];

            if (!first_occurrence.count(current_char)) {
                first_occurrence[current_char] = i;

                result += (n - i);
            }
        }

        cout << result << "\n";
    }

    return 0;
}
