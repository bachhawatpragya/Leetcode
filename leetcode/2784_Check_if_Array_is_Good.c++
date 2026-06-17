#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        for(int i=0;i<n-1;i++){
            if(nums[i]!=i+1)return false;
        }
        return nums[n-1]==n-1;
    }
};
int main(){
    Solution s;
    vector<int> nums={1,2,3,4};
    cout<<s.isGood(nums);
}