#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=INT_MIN;
        int i=0, j=nums.size()-1;
        while(i<j){
            int sum=nums[i]+nums[j];
            maxi=max(maxi,sum);
            i++,j--;

        }
        return maxi;
    }
};

int main(){
    Solution s;
    vector<int> nums={3,5,2,3};
    cout<<s.minPairSum(nums);
}