#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int getMinTime(int n, int m, vector<int>& cache) {
    // Create a map to count the number of requests per service
    unordered_map<int, int> serviceCount;
    vector<int> serviceTimes(n + 1, 0);  // Create a vector to store time for each service
    
    // Count the number of requests for each service and calculate times
    for (int i = 0; i < m; ++i) {
        int service = cache[i];
        serviceCount[service]++;
        serviceTimes[service]++;
    }

    // Find the maximum number of requests for any single service
    int maxTime = 0;
    for (int i = 1; i <= n; ++i) {
        maxTime = max(maxTime, serviceTimes[i]);
    }
    
    // The minimum time to process all requests
    return maxTime;
}

int main() {
    int n = 3;
    int m = 5;
    vector<int> cache = {1, 1, 3, 1, 1};
    
    cout << getMinTime(n, m, cache) << endl;
    
    return 0;
}
