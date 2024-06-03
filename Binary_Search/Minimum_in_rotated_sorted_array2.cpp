#include<iostream>
#include <vector>
using namespace std;

int find_Min_in_sorted2(vector<int>& nums){
        int start = 0;
        int end = nums.size() - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] > nums[end]) {
                start = mid + 1;
            } else if (nums[mid] < nums[end]) {
                end = mid;
            } else {
                end--;
            }
        }
        return nums[start];
};

int main(){
    vector<int> nums = {10,1,10,10,10};
    int ans = find_Min_in_sorted2(nums);
    cout << ans << endl;
};