#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])return true;
        }
        return false;
    }
};
int main(){
    Solution s;
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        nums[i]=i;
    }
    cout<<s.containsDuplicate(nums);
    return 0;
}