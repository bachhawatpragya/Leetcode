#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size()-1;
        sort(nums.begin(),nums.end());
        return (nums[n]-1)*(nums[n-1]-1);
    }
};
int main(){
    Solution s;
    vector<int>nums={3,4,5,2};
    cout<<s.maxProduct(nums)<<endl;
    return 0;
}