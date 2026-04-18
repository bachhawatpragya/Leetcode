#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int currsum=0;
        for(int i=0;i<nums.size();i++){
            currsum+=nums[i];
            maxi=max(maxi,currsum);
            if(currsum<0)currsum=0;
        }
        return maxi;
    }
};

int main(){
    Solution sol;
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    cout<<sol.maxSubArray(nums)<<endl;
    return 0;
}