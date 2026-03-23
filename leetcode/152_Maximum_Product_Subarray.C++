#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1=INT_MIN,max2=INT_MIN;
        int prefix1=1,prefix2;
        for(int i=0;i<nums.size();i++){
            prefix1*=nums[i];
            max1=max(max1,prefix1);
            if(nums[i]==0)prefix1=1;
        }
        for(int i=nums.size()-1;i>=0;i--){
            prefix2*=nums[i];
            max2=max(max2,prefix2);
            if(nums[i]==0)prefix2=1;
        }
        return max(max1,max2);
    }
};

int main(){
    Solution s;
    vector<int>nums={-2,0,-1};
    cout<<s.maxProduct(nums)<<endl;
}