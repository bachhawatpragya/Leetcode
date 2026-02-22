#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // I have used the in built function that consumes O(n) time and O(1) space
        next_permutation(nums.begin(),nums.end());
    }
};
int main(){
    Solution s;
    vector<int>nums={1,2,3};
    s.nextPermutation(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}