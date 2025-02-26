#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> getPatchSequence(const string& patch, const string& designerWords) {
    unordered_map<char, vector<int>> charToIndices;
    
    // Preprocess the patch to map each character to its indices
    for (int i = 0; i < patch.size(); ++i) {
        charToIndices[patch[i]].push_back(i);
    }
    
    vector<int> sequence;
    int lastIndex = -1;
    
    for (char ch : designerWords) {
        if (charToIndices.find(ch) == charToIndices.end()) {
            return {-1};
        }
        
        auto& indices = charToIndices[ch];
        auto it = upper_bound(indices.begin(), indices.end(), lastIndex);
        
        if (it == indices.end()) {
            return {-1};
        }
        
        sequence.push_back(*it);
        lastIndex = *it;
    }
    
    return sequence;
}

int main() {
    string patch, designerWords;
    cin >> patch >> designerWords;
    
    vector<int> sequence = getPatchSequence(patch, designerWords);
    
    if (sequence.size() == 1 && sequence[0] == -1) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < sequence.size(); ++i) {
            if (i > 0) cout << " ";
            cout << sequence[i];
        }
        cout << endl;
    }
    
    return 0;
}