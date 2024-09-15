#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
    bool check(int hour, int minute, int second) {
        set<char> digits;
        string time = (hour < 10 ? "0" : "") + to_string(hour) +
                        (minute < 10 ? "0" : "") + to_string(minute) +
                        (second < 10 ? "0" : "") + to_string(second);
        
        for (char c : time) {
            digits.insert(c);
        }

        return digits.size() <= 2;
    }

    int timeInSeconds(const string &time) {
        int hours = stoi(time.substr(0, 2));
        int minutes = stoi(time.substr(3, 2));
        int seconds = stoi(time.substr(6, 2));
        return hours * 3600 + minutes * 60 + seconds;
    }

    int solution(string S, string T) {
        int start = timeInSeconds(S);
        int end = timeInSeconds(T);
        int ans = 0;

        for (int t = start; t <= end; ++t) {
            int hour = (t / 3600) % 24;
            int minute = (t / 60) % 60;
            int second = t % 60;

            if (check(hour, minute, second)) {
                ++ans;
            }
        }

        return ans;
    }
};

int main() {
    string S = "00:00:00";
    string T = "23:59:59";
    Solution s;
    cout << "Number of interesting times: " << s.solution(S, T) << endl;

    return 0;
}
