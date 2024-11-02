#include <iostream>
#include <queue>
#include <string>
using namespace std;

// Function to check if a number represented as a string is divisible by 33 and 66
bool isDivisibleBy33And66(const string& num) {
    if(num[num.size()-1] != '6') return false;
    int sum_digits = 0;
    int odd_sum = 0, even_sum = 0;
    for (int i = 0; i < num.size(); ++i) {
        int digit = num[i] - '0';
        sum_digits += digit;
        if (i % 2 == 0) {
            odd_sum += digit;
        } else {
            even_sum += digit;
        }
    }
    if ((odd_sum - even_sum) % 11 != 0) return false;
    
    return true;
}

// Function to find the smallest number of length n consisting only of 3s and 6s
string findSmallestDivisible(int n) {
    if (n == 1) return "-1";  // No valid number for n=1
    if(n == 2) return "66";
    queue<string> q;
    q.push("3");
    q.push("6");

    while (!q.empty()) {
        string current = q.front();
        q.pop();

        // If we have reached the desired length, check divisibility
        if (current.size() == n) {
            if (isDivisibleBy33And66(current)) {
                return current;
            }
        }

        // If current length is less than n, add '3' and '6' to form new numbers
        if (current.size() < n) {
            q.push(current + "3");
            q.push(current + "6");
        }
    }

    return "-1";  // If no valid number is found
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        cout << findSmallestDivisible(n) << endl;
    }

    return 0;
}
