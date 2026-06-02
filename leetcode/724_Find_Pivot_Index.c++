#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left=0;
        int sum=accumulate(nums.begin(),nums.end(),0);
        for(int i=0;i<nums.size();i++){
            if(left==sum-nums[i]-left){
                return i;
            }
            left+=nums[i];
        }
        return -1;
    }
};
int main(){
    Solution s;
    vector<int>nums={1,7,3,6,5,6};
    cout<<s.pivotIndex(nums);
}