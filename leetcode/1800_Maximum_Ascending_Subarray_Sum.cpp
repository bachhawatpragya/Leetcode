#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxi=nums[0];
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1])
                sum=nums[i];
            else{
                sum+=nums[i];
                maxi=max(maxi,sum);
            }
        }
        return maxi;
    }
};
int main(){
    Solution s;
    vector<int> nums={10,20,30,5,10,50};
    cout<<s.maxAscendingSum(nums);
    return 0;
}