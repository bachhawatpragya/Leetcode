#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int reqq=target-nums[i];
            if(mp.find(reqq)!=mp.end())return{mp[reqq]+1,i+1};
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};
int main(){
    Solution s;
    vector<int> nums={2,7,11,15};
    int target=9;
    vector<int> result = s.twoSum(nums,target);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}