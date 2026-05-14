#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1;
        int r=*max_element(nums.begin(),nums.end());
        int ans=INT_MAX;
        while(l<=r){
            int mid=(l+r)>>1;
            int sum=0;
            for(int i:nums){
                sum+=ceil((double)i/mid);
            }
            if(sum<=threshold){
                ans=min(ans,mid);
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> nums={1,2,5,9};
    int threshold=6;
    cout<<s.smallestDivisor(nums,threshold);
    return 0;
}