#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            int maxi=INT_MIN;
            int mini=INT_MAX;
            for(int j=i;j<nums.size();j++){
                maxi=max(maxi, nums[j]);
                mini=min(mini,nums[j]);
                long long diff=maxi-mini;
                sum+=diff;
            }
        }
       return sum;
    }
};
int main(){
    Solution s;
    vector<int> nums = {1,2,3};
    cout<<s.subArrayRanges(nums)<<endl;
    return 0;
}