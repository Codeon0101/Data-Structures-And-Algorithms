#include <iostream>
#include <vector>
#include <algorithm>  // Include algorithm library for sort function

using namespace std;

int maxDistance(vector<int>& position, int m) {
        int start=1,end,mid,ans=0;
        sort(position.begin(),position.end());
        end = position[position.size()-1] - position[0];

        while(start<=end){
            mid = start+(end-start)/2;
            int pos = position[0],balls = 1;
            for(int i=0;i<position.size();i++){
                if(mid+pos <= position[i]){
                    balls++;
                    pos = position[i];
                }
            }
            if(balls<m){
                end = mid-1;
            }
            else{
            (balls>=m);
                ans = mid;
                start = mid+1;
            }
        }
        return ans;
};

int main() {
    vector<int> stalls = {1, 2, 4, 8, 9};
    int m = 3;
    int ans = maxDistance(stalls, m);
    cout << ans << endl;
};

