#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int robrange(vector<int>&nums, int s, int e){
        int prev1=0, prev2=0;
        for(int i=s;i<=e;i++){
            int curr=max(prev1,prev2+nums[i]);
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }

    int rob(vector<int>& nums) {
        if(nums.size()<2)return nums[0];
        int prev=robrange(nums,0,nums.size()-2);
        int prevb=robrange(nums,1,nums.size()-1);

        return max(prev,prevb);
        
    }
};
int main(){
    Solution solution;
    vector<int> nums = {2, 3, 2};
    int result = solution.rob(nums);
    cout << "Maximum amount that can be robbed: " << result << endl; // Output: 3
    return 0;
}