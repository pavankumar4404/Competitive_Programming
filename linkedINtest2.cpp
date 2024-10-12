#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Structure to store the farms with their coordinates and premium
struct Farm {
    int x, y, premium;
};

// Function to calculate the weighted median
int weightedMedian(vector<pair<int, int>>& coords) {
    // Sort the coordinates by the farm locations
    sort(coords.begin(), coords.end());

    // Calculate total weight (sum of premiums)
    int totalWeight = 0;
    
    for (const auto& coord : coords) {
        totalWeight += coord.second;
    }

    // Find the point where the cumulative weight reaches half of total weight
    int cumWeight = 0;
    for (const auto& coord : coords) {
        cumWeight += coord.second;
        if (cumWeight >= (totalWeight + 1) / 2) {  // Adjust the median logic here
            return coord.first;
        }
    }
    return coords[0].first; // fallback, though code should never reach here
}

// Function to calculate total cost given the optimal control center
long long calculateTotalCost(int cx, int cy, const vector<Farm>& farms) {
    long long totalCost = 0;
    for (const auto& farm : farms) {
        int manhattanDist = abs(farm.x - cx) + abs(farm.y - cy);
        totalCost += 1LL * farm.premium * manhattanDist;
    }
    return totalCost;
}

int main() {
    // Example data: coordinates and premiums for the farms
    vector<Farm> farms = {
         {1, 1, 1},
        {3, 2, 3},
        {2, 3, 2},
        {4, 4, 4}
    };
    
    int n = farms.size();

    // Separate x and y coordinates with their corresponding premiums
    vector<pair<int, int>> xCoords, yCoords;
    for (const auto& farm : farms) {
        xCoords.push_back({farm.x, farm.premium});
        yCoords.push_back({farm.y, farm.premium});
    }

    // Find the weighted medians for x and y coordinates
    int cx = weightedMedian(xCoords);
    int cy = weightedMedian(yCoords);

    // Calculate the minimum total cost for connecting all farms
    long long minCost = calculateTotalCost(cx, cy, farms);

    // Output the result
    cout << "Optimal control center: (" << cx << ", " << cy << ")\n";
    cout << "Minimum total connection cost: " << minCost << "\n";

    return 0;
}
