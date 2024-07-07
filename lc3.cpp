#include <iostream>
#include <vector>

using namespace std;

int countValidSubmatrices(vector<vector<char>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    
    vector<vector<int>> prex(n + 1, vector<int>(m + 1, 0));
    vector<vector<int>> prey(n + 1, vector<int>(m + 1, 0));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            prex[i + 1][j + 1] = prex[i][j + 1] + prex[i + 1][j] - prex[i][j] + (grid[i][j] == 'X' ? 1 : 0);
            prey[i + 1][j + 1] = prey[i][j + 1] + prey[i + 1][j] - prey[i][j] + (grid[i][j] == 'Y' ? 1 : 0);
        }
    }

    int ans = 0;

    for (int i2 = 0; i2 < n; i2++) {
        for (int j2 = 0; j2 < m; j2++) {
            int x = prex[i2 + 1][j2 + 1];
            int y = prey[i2 + 1][j2 + 1];
            
            if (x == y && x > 0) {
                ans++;
            }
        }
    }
    
    return ans;
}
// #include <iostream>
// #include <vector>

// using namespace std;

// int countValidSubmatrices(vector<vector<char>>& grid) {
//     int n = grid.size();
//     int m = grid[0].size();
    
//     vector<vector<int>> prex(n + 1, vector<int>(m + 1, 0));
//     vector<vector<int>> prey(n + 1, vector<int>(m + 1, 0));
    
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < m; ++j) {
//             prex[i + 1][j + 1] = prex[i][j + 1] + prex[i + 1][j] - prex[i][j] + (grid[i][j] == 'X' ? 1 : 0);
//             prey[i + 1][j + 1] = prey[i][j + 1] + prey[i + 1][j] - prey[i][j] + (grid[i][j] == 'Y' ? 1 : 0);
//         }
//     }

//     int ans = 0;

//     for (int i1 = 0; i1 < n; ++i1) {
//         for (int j1 = 0; j1 < m; ++j1) {
//             for (int i2 = i1; i2 < n; ++i2) {
//                 for (int j2 = j1; j2 < m; ++j2) {
//                     int x = prex[i2 + 1][j2 + 1] - prex[i1][j2 + 1] - prex[i2 + 1][j1] + prex[i1][j1];
//                     int y = prey[i2 + 1][j2 + 1] - prey[i1][j2 + 1] - prey[i2 + 1][j1] + prey[i1][j1];
                    
//                     bool is00 = (i1 <= 0 && j1 <= 0);
//                     bool isx = (x > 0);
                    
//                     if (is00 && x == y && isx) {
//                         ans++;
//                     }
//                 }
//             }
//         }
//     }
    
//     return ans;
// }

int main() {
    vector<vector<char>> grid1 = { {'X', 'Y', '.'}, {'Y', '.', '.'} };
    vector<vector<char>> grid2 = { {'X', 'X'}, {'X', 'Y'} };
    vector<vector<char>> grid3 = { {'.', '.'}, {'.', '.'} };

    cout << "Output 1: " << countValidSubmatrices(grid1) << endl;  // Output: 3
    cout << "Output 2: " << countValidSubmatrices(grid2) << endl;  // Output: 0
    cout << "Output 3: " << countValidSubmatrices(grid3) << endl;  // Output: 0

    return 0;
}

// #include <iostream>
// #include <vector>

// using namespace std;

// int countValidSubmatrices(vector<vector<char>>& grid) {
//     int n = grid.size();
//     int m = grid[0].size();
//     int ans = 0;

//     for (int i1 = 0; i1 < n; i1++) {
//         for (int j1 = 0; j1 < m; j1++) {
//             for (int i2 = i1; i2 < n; i2++) {
//                 for (int j2 = j1; j2 < m; j2++) {
//                     int x = 0, y = 0;
//                     bool is00 = false;
//                     bool isx = false;

//                     for (int i = i1; i <= i2; i++) {
//                         for (int j = j1; j <= j2; j++) {
//                             if (grid[i][j] == 'X') x++;
//                             if (grid[i][j] == 'Y') y++;
//                             if (i == 0 && j == 0) is00 = true;
//                             if (grid[i][j] == 'X') isx = true;
//                         }
//                     }

//                     if (is00 && x == y && isx) {
//                         ans++;
//                     }
//                 }
//             }
//         }
//     }
//     return ans;
// }

// int main() {
//     vector<vector<char>> grid1 = { {'X', 'Y', '.'}, {'Y', '.', '.'} };
//     vector<vector<char>> grid2 = { {'X', 'X'}, {'X', 'Y'} };
//     vector<vector<char>> grid3 = { {'.', '.'}, {'.', '.'} };

//     cout << "Output 1: " << countValidSubmatrices(grid1) << endl;  // Output: 3
//     cout << "Output 2: " << countValidSubmatrices(grid2) << endl;  // Output: 0
//     cout << "Output 3: " << countValidSubmatrices(grid3) << endl;  // Output: 0

//     return 0;
// }
