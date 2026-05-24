#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,count=1;
        for(i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[count]=nums[i];
                count++;
            }
        }
        return count;
    }
};
int  main(){
    Solution s;
    vector<int> nums={1,1,2};
    cout<<s.removeDuplicates(nums);
}