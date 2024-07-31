#include <iostream>
#include <vector>
#include<bits/stdc++.h>

// Function to print all subarrays
void printAllSubarrays(const std::vector<int>& arr) {
    int n = arr.size();

    // Pick starting point
    for (int start = 0; start < n; ++start) {
        // Pick ending point
        for (int end = start; end < n; ++end) {
            // Print subarray between current starting and ending points
            for (int k = start; k <= end; ++k) {
                std::cout << arr[k] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    std::vector<int> arr = {1, 2, 3, 4};

    std::cout << "All subarrays are:\n";
    printAllSubarrays(arr);

    return 0;
};
