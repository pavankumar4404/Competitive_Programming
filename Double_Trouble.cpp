#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canActivateFromLeft(int N, vector<int>& X, vector<int>& P) {
    vector<bool> activated(N, false);
    activated[0] = true;
    int current_pos = X[0];
    int power = P[0];

    for (int i = 1; i < N; ++i) {
        if (X[i] <= current_pos + power) {
            activated[i] = true;
            power = max(power, X[i] - current_pos + P[i]);
            current_pos = X[i];
        } else {
            break;
        }
    }

    return all_of(activated.begin(), activated.end(), [](bool v) { return v; });
}

bool canActivateFromRight(int N, vector<int>& X, vector<int>& P) {
    vector<bool> activated(N, false);
    activated[N-1] = true;
    int current_pos = X[N-1];
    int power = P[N-1];

    for (int i = N-2; i >= 0; --i) {
        if (X[i] >= current_pos - power) {
            activated[i] = true;
            power = max(power, current_pos - X[i] + P[i]);
            current_pos = X[i];
        } else {
            break;
        }
    }

    return all_of(activated.begin(), activated.end(), [](bool v) { return v; });
}

bool canActivateInTwoMoves(int N, vector<int>& X, vector<int>& P) {
    vector<bool> activated_left(N, false);
    vector<bool> activated_right(N, false);

    // Simulate activation from the left
    int current_pos_left = X[0];
    int power_left = P[0];
    activated_left[0] = true;
    for (int i = 1; i < N; ++i) {
        if (X[i] <= current_pos_left + power_left) {
            activated_left[i] = true;
            power_left = max(power_left, X[i] - current_pos_left + P[i]);
            current_pos_left = X[i];
        } else {
            break;
        }
    }

    // Simulate activation from the right
    int current_pos_right = X[N-1];
    int power_right = P[N-1];
    activated_right[N-1] = true;
    for (int i = N-2; i >= 0; --i) {
        if (X[i] >= current_pos_right - power_right) {
            activated_right[i] = true;
            power_right = max(power_right, current_pos_right - X[i] + P[i]);
            current_pos_right = X[i];
        } else {
            break;
        }
    }

    // Check if any overlap exists where all balls can be activated
    for (int i = 0; i < N; ++i) {
        if (activated_left[i] && activated_right[i]) {
            return true;
        }
    }

    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> X(N), P(N);
        for (int i = 0; i < N; ++i) {
            cin >> X[i];
        }
        for (int i = 0; i < N; ++i) {
            cin >> P[i];
        }

        if (canActivateFromLeft(N, X, P) || canActivateFromRight(N, X, P) || canActivateInTwoMoves(N, X, P)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
