#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generateValidStrings(string current, int n, vector<string>& result) {
    if (current.length() == n) {
        result.push_back(current);
        return;
    }
    if (current.empty() || current.back() == '1') {
        generateValidStrings(current + '0', n, result);
    }
    generateValidStrings(current + '1', n, result);
}

vector<string> generateValidStrings(int n) {
    vector<string> result;
    generateValidStrings("", n, result);
    return result;
}

int main() {
    int n; cin>>n;
    vector<string> result = generateValidStrings(n);

    for (const string& str : result) {
        cout << str << endl;
    }

    return 0;
}
