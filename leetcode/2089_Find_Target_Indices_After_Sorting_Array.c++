#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>res;
        int l= upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
        int f= lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        for(int i=f;i<=l;i++){
            res.push_back(i);
        }
        return res;
    }
};
int main(){
    Solution s;
    vector<int> nums={1,2,5,2,3};
    vector<int> res= s.targetIndices(nums,2);
    for(int i:res){
        cout<<i<<" ";
    }
    return 0;
}