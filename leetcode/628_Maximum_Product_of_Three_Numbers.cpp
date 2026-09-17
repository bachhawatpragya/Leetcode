#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int prod=nums[n-1]*nums[n-2]*nums[n-3];
        int product=nums[0]*nums[1]*nums[n-1];
        return max(prod,product);
    }
};
int main(){
    Solution s;
    vector<int> nums={1,2,3,4};
    cout<<s.maximumProduct(nums);
    return 0;
}