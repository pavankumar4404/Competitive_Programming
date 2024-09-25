#include <iostream>
#include <vector>

using namespace std;

class Trie {
private:
    struct trieNode {
        vector<trieNode*> children;
        bool isEnd;
        
        trieNode() : children(26, nullptr), isEnd(false) {}
    };
    
    trieNode* root;
    
public:
    Trie() {
        root = new trieNode();
    }
    
    void insert(const string& word) {
        trieNode* node = root;
        for (char c : word) {
            int index = c - 'a';
            if (!node->children[index]) {
                node->children[index] = new trieNode();
            }
            node = node->children[index];
        }
        node->isEnd = true;
    }
    
    bool search(const string& word) {
        trieNode* node = root;
        for (char c : word) {
            int index = c - 'a';
            if (!node->children[index]) {
                return false;
            }
            node = node->children[index];
        }
        return node->isEnd;
    }
    
    bool startsWith(const string& prefix) {
        trieNode* node = root;
        for (char c : prefix) {
            int index = c - 'a';
            if (!node->children[index]) {
                return false;
            }
            node = node->children[index];
        }
        return true;
    }
};

int main() {
    Trie trie;
    
    trie.insert("apple");
    cout << trie.search("apple") << endl;   // returns true
    cout << trie.search("app") << endl;     // returns false
    cout << trie.startsWith("app") << endl; // returns true
    
    trie.insert("app");
    cout << trie.search("app") << endl;     // returns true
    
    return 0;
}
