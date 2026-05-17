#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size();i++){
            x^=(i+1);
            x^=nums[i];
        }
        return x;
    }
};

int main(){
    Solution sol;
    vector<int> nums={3,0,1};
    cout<<sol.missingNumber(nums)<<endl;
    return 0;
}