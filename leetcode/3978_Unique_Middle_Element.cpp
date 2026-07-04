#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int mid=nums[nums.size()/2];
        int cnt=0;
        for(int i:nums){
            if(i==mid)cnt++;
        }
        return cnt<=1;
    }
};
int main(){
    Solution s;
    vector<int> nums={1,2,3,4,5};
    cout<<s.isMiddleElementUnique(nums)<<endl;
}