#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    set<vector<int>> res;
    vector<int> curr;
    void solve(vector<int>& nums, int strt){
        if(strt==nums.size()){
            res.insert(curr);
            return;
        }
        solve(nums, strt+1);
        curr.push_back(nums[strt]);
        solve(nums, strt+1);
        curr.pop_back();
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        solve(nums, 0);
        return vector<vector<int>>(res.begin(),res.end());
        
    }
};
int main(){
    Solution s;
    vector<int> nums = {1,2,2};
    vector<vector<int>> ans = s.subsetsWithDup(nums);
    for(auto v: ans){
        for(auto i: v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}