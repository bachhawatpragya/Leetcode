#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int prev1=0;
        int prev2=0;
        for(int i: nums){
            int curr=max(prev1,prev2+i);
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
};
int main(){
    Solution solution;
    vector<int> nums = {1, 2, 3, 1};
    int result = solution.rob(nums);
    cout << "Maximum amount that can be robbed: " << result << endl; // Output: 4
    return 0;
}