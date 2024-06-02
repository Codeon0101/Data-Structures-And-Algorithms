#include <iostream>
#include <vector>
#include <algorithm>  // Include algorithm library for sort function

using namespace std;

int Aggressive_Cow(vector<int>& stalls, int k) {
    int start = 1, ans = 0, end, mid;

    sort(stalls.begin(), stalls.end()); 
    end = stalls[stalls.size() - 1] - stalls[0];

    while (start <= end) {
        mid = start + (end - start) / 2;
        int position = stalls[0], cow = 1;

        for (int i = 1; i < stalls.size(); i++) {
            if (position + mid <= stalls[i]) {
                cow++;
                position = stalls[i];
            }
        }

        if (cow < k) {
            end = mid - 1;
        } 
        else {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
};

int main() {
    vector<int> stalls = {1, 2, 4, 8, 9};
    int k = 3;
    int ans = Aggressive_Cow(stalls, k);
    cout << ans << endl;
};
