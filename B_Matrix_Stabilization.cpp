
// author: pavan
#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

// Macros
typedef long long ll;
#define rep(i,j) for(int i=0;i<j;i++)
#define all(x) x.begin(), x.end()
#define pb push_back

typedef vector<int> vi;

bool check(int i, int j, int n, int m) {
    return i >= 0 && i < n && j >= 0 && j < m;
}

int getMaxNeighbor(int i, int j, int n, int m, const vector<vector<int>>& grid) {
    int dr[] = {-1, 0, 1, 0};
    int dc[] = {0, 1, 0, -1};
    int mx = INT_MIN;
    for (int k = 0; k < 4; ++k) {
        int r = i + dr[k];
        int c = j + dc[k];
        if (check(r, c, n, m)) {
            mx = max(grid[r][c], mx);
        }
    }
    return mx;
}

void stabilizeMatrix(vector<vector<int>>& grid, int n, int m) {
    bool changed = true;
    while (changed) {
        changed = false;
        vector<vector<int>> newGrid = grid;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int maxNeighbor = getMaxNeighbor(i, j, n, m, grid);
                if (grid[i][j] > maxNeighbor) {
                    newGrid[i][j] = maxNeighbor;
                    changed = true;
                }
            }
        }
        grid = newGrid;
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
        }
    }

    stabilizeMatrix(grid, n, m);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << grid[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main() {
    fastio();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
