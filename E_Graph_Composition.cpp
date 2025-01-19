#include <bits/stdc++.h>
using namespace std;

class DSU {
public:
    vector<int> parent, rank;
    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; ++i) parent[i] = i;
    }
    int find(int x) {
        if (parent[x] != x) parent[x] = find(parent[x]);
        return parent[x];
    }
    bool unite(int x, int y) {
        int rootX = find(x), rootY = find(y);
        if (rootX == rootY) return false;
        if (rank[rootX] < rank[rootY]) swap(rootX, rootY);
        parent[rootY] = rootX;
        if (rank[rootX] == rank[rootY]) rank[rootX]++;
        return true;
    }
    bool connected(int x, int y) {
        return find(x) == find(y);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m1, m2;
        cin >> n >> m1 >> m2;

        DSU dsuF(n), dsuG(n);
        vector<pair<int, int>> edgesF(m1), edgesG(m2);

        // Read edges of F
        for (int i = 0; i < m1; ++i) {
            int u, v;
            cin >> u >> v;
            --u, --v;
            edgesF[i] = {u, v};
            dsuF.unite(u, v);
        }

        // Read edges of G
        for (int i = 0; i < m2; ++i) {
            int u, v;
            cin >> u >> v;
            --u, --v;
            edgesG[i] = {u, v};
            dsuG.unite(u, v);
        }

        // Step 1: Assign component indices for G
        vector<int> componentG(n);
        for (int i = 0; i < n; ++i) {
            componentG[i] = dsuG.find(i);
        }

        // Step 2: Remove unnecessary edges from F
        int removeCount = 0;
        DSU tempDSU(n); // Temporary DSU to rebuild F without unnecessary edges
        for (auto& edge : edgesF) {
            int u = edge.first, v = edge.second;
            if (componentG[u] != componentG[v]) {
                // Edge connects different components of G, remove it
                removeCount++;
            } else {
                tempDSU.unite(u, v); // Keep this edge
            }
        }

        // Step 3: Count the number of components in F and G
        int componentsF = 0, componentsG = 0;
        for (int i = 0; i < n; ++i) {
            if (tempDSU.find(i) == i) componentsF++;
            if (dsuG.find(i) == i) componentsG++;
        }

        // Step 4: Add edges to match the number of components in G
        int addCount = max(0, componentsF - componentsG);

        // Total operations = removals + additions
        cout << removeCount + addCount << '\n';
    }

    return 0;
}
