#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>mp(nums.size()+1,0);
        for(int i:nums)mp[i]++;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]>1)return nums[i];
        }
        return -1;
    }
};
int main(){
    Solution sol;
    vector<int> nums = {1, 3, 4, 2, 2};
    int duplicate = sol.findDuplicate(nums);
    cout << "The duplicate number is: " << duplicate << endl;
    return 0;
}