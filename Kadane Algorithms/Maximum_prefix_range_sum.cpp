// Maximum prefix sum for a given range
// https://www.geeksforgeeks.org/problems/maximum-prefix-sum-for-a-given-range0227/1?utm_
//source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include <climits>

using namespace std;

vector<int> maxPrefixes(int a[], int L[], int R[], int N, int Q) {
    vector<int> result;

    for (int i = 0; i < Q; ++i) {
        int maxi = INT_MIN;
        int prefixSum = 0;
        
        for (int j = L[i]; j <= R[i]; ++j) {
            prefixSum += a[j];
            if (maxi < prefixSum) {
                maxi = prefixSum;
            }
        }
        result.push_back(maxi);
    }
    return result;
};

int main() {
    // Sample array
    int a[] = {-1, 2, 3, -5};
    int N = sizeof(a) / sizeof(a[0]);

    // Sample queries
    int L[] = {0, 1};
    int R[] = {3,3};
    int Q = sizeof(L) / sizeof(L[0]);

    vector<int> result = maxPrefixes(a, L, R, N, Q);

    // Output the results
    for (int i = 0; i < Q; ++i) {
        cout << "Max prefix sum for range (" << L[i] << ", " << R[i] << ") is " << result[i] << endl;
    }

    return 0;
};