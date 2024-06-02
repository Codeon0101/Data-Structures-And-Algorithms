#include<iostream>
using namespace std;

int koko_loves_banana(int piles[],int size,int h){
        int start=0,ans=0,end=0;
        long long sum=0;
        for(int i=0;i<size;i++){
            sum += piles[i];
            end = max(end,piles[i]);
        }
        start = sum/h;
        if(!start){
            start = 1;
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            long long total_time = 0;
            for(int j=0;j<size;j++){
                total_time += piles[j]/mid;
                if(piles[j]%mid){
                    total_time++;
                }
            }
            if(total_time>h){
                start = mid+1;
            }
            else{
                ans = mid;
                end = mid-1;
            }
        }
        return ans;
};

int main(){
    int piles[] = {3,6,7,11};
    int size = sizeof(piles)/sizeof(piles[0]);
    int h = 8;
    int ans = koko_loves_banana(piles,size,h);
    cout<<ans<<endl;

    return 0;
};
