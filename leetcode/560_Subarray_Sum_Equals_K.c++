#include<bits/stdc++.h>
using namespace std;    
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();

        int cnt=0;
        for(int i=0;i<n;i++){
            int sum=0;
            
            for(int j=i;j<n;j++){
                sum+=nums[j];
                if(sum==k)cnt++;
            }
        }
        return cnt;
    }
};

int main(){
    Solution s;
    vector<int> nums={1,2,1,3,1,4,1,5};
    int k=4;
    cout<<s.subarraySum(nums,k);
}