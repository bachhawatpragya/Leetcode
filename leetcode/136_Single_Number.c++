#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xo=0;
        for(int n:nums){
            xo^=n;
        }
        return xo;
    }
};
int main() {
    Solution s;
    vector<int> nums={4,1,2,1,2};
    cout<<s.singleNumber(nums);
}