#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    }
};
int main(){
    Solution s;
    vector<int> nums={1,3,5,6};
    cout<<s.searchInsert(nums,5)<<endl;
    cout<<s.searchInsert(nums,2)<<endl;
    cout<<s.searchInsert(nums,7)<<endl;
    cout<<s.searchInsert(nums,0)<<endl;
}