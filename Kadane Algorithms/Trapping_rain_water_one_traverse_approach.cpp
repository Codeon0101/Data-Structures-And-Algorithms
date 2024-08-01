#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int trapping_rain_water(vector<int> &height) {
    int n = height.size();
    if (n == 0) return 0;

    int left = 0, right = n - 1;
    int left_max = 0, right_max = 0;
    int answer = 0;

    while (left <= right) {
        if (height[left] <= height[right]) {
            if (height[left] >= left_max) {
                left_max = height[left];
            } else {
                answer += left_max - height[left];
            }
            left++;
        } else {
            if (height[right] >= right_max) {
                right_max = height[right];
            } else {
                answer += right_max - height[right];
            }
            right--;
        }
    }

    return answer;
};

int main() {
    vector<int> arr = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int ans = trapping_rain_water(arr);
    cout << "The units of water trapped = " << ans << endl;

    return 0;
};