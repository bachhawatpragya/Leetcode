#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int left=0;
        int n=nums.size();
        long long cursum=0, maxsum=0;
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            cursum+=nums[i];
            while(st.count(nums[i])){
                cursum-=nums[left];
                st.erase(nums[left++]);
            }
            st.insert(nums[i]);
            if(i-left+1==k){
                maxsum=max(maxsum,cursum);
                cursum-=nums[left];
                st.erase(nums[left++]);
            }
        }
        return maxsum;
    }
};
int main(){
    Solution sol;
    vector<int> nums={1,5,4,2,9,9,9};
    int k=3;
    cout<<sol.maximumSubarraySum(nums,k)<<endl;
}