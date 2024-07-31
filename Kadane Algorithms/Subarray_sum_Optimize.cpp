// Array Divide into TWo parts and then, calculate whether the sum is equal or not of dividing parts of the Array.
// Optimize Solution for the subarray divide into the array sum.

#include <iostream>
using namespace std;

bool subarray_sum(int arr[], int size) {
    int total_sum = 0;

    // Calculate total sum of the array
    for (int i = 0; i < size; ++i)
        total_sum += arr[i];

    int prefix_sum = 0;

    // Traverse the array and check for the prefix and subarray sums
    for (int i = 0; i < size; ++i) {
        prefix_sum += arr[i];
        int subarray_sum = total_sum - prefix_sum;
        if (subarray_sum == prefix_sum)
            return true;
    }

    return false;
}

int main() {
    int arr[] = {3, 4, -2, 5, 8, 20, -10, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool ans = subarray_sum(arr, size);

    if (ans)
        cout << "The sum is equal with the Subarray" << endl;
    else
        cout << "The sum is not equal with the Subarray" << endl;

    return 0;
}


// By Using the Vector instead of Array.

/* #include <iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

bool subarray_sum(vector<int> &arr, int size) {
    int total_sum = 0;

    // Calculate total sum of the array
    for (int i = 0; i < size; ++i)
        total_sum += arr[i];

    int prefix_sum = 0;

    // Traverse the array and check for the prefix and subarray sums
    for (int i = 0; i < size; ++i) {
        prefix_sum += arr[i];
        int subarray_sum = total_sum - prefix_sum;
        if (subarray_sum == prefix_sum)
            return true;
    }

    return false;
};

int main() {
    vector<int>arr = {3, 4, -2, 5, 8, 20, -10, 8};
    int size = arr.size();
    bool ans = subarray_sum(arr, size);

    if (ans)
        cout << "The sum is equal with the Subarray" << endl;
    else
        cout << "The sum is not equal with the Subarray" << endl;

    return 0;
};
 */
