#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> right(n), left(n);

        left[0]=nums[0];
        for(int i=1;i<n;i++)
            left[i]=left[i-1]+nums[i];
 
        right[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
            right[i]=right[i+1]+nums[i];
 
        for(int i=0;i<n;i++){
            if(left[i]==right[i])
                return i;
        }
            
        return -1;
    }
};
int main(){
    Solution s;
    vector<int> nums={2,3,-1,8,4};
    s.findMiddleIndex(nums);
    return 0;
}