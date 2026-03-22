#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>&nums, int low, int high, int mid){
        int right=mid+1;
        int left=low;
        vector<int>res;
        while(left<=mid && right<=high){
            if(nums[left]<=nums[right]){
                res.push_back(nums[left++]);
            }
            else{
                res.push_back(nums[right++]);
            }
        }
        while(left<=mid){
            res.push_back(nums[left++]);
        }
        while(right<=high){
            res.push_back(nums[right++]);
        }
        for(int i=low;i<=high;i++){
            nums[i]=res[i-low];
        }
    }
    int cnt(vector<int> &nums, int low, int mid, int high){
        int right=mid+1;
        int count=0;

        for(int i=low;i<=mid;i++){
            while(right<=high && nums[i]> 2LL*nums[right]){
                right++;
            }
            
            count+=right-(mid+1);
        }
        return count;

    }
    int mergeSort(vector<int>& nums, int low, int high){
        int count=0;
        if(low>=high)return 0;
        int mid=(low+high)>>1;
        count+=mergeSort(nums, low, mid);
        count+=mergeSort(nums, mid+1, high);
        count+=cnt(nums, low, mid, high);
        merge(nums, low, high, mid);
        return count;
    }
    int reversePairs(vector<int>& nums) {
        int high=nums.size()-1;
        int count=mergeSort(nums, 0, high);
        return count;
    }
};

int main(){
    Solution s;
    vector<int>nums={1,3,2,3,1};
    cout<<s.reversePairs(nums)<<endl;
    return 0;
}