#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int ramp=0;
        int n=nums.size();
        vector<pair<int,int>> vp;
        for(int i=0;i<n;i++){
            vp.push_back({nums[i],i});
        }
        sort(vp.begin(),vp.end());
        int mini=vp[0].second;
        for(int i=0;i<n;i++){
            mini=min(mini,vp[i].second);
            ramp=max(ramp,vp[i].second-mini);
        }
        return ramp;
    }
};
int main(){
    Solution s;
    vector<int> nums={6,0,8,2,1,5};
    cout<<s.maxWidthRamp(nums);
}