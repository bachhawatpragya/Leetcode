#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            // jo second element k add krne se target mil jayega..
            int req=target-nums[i];
            if(mp.find(req)!=mp.end())
                return {mp[req],i};
            // idhr pr hum apna current number ko as a key store kr rahe aur uske index ko value 
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};
int main(){
    Solution s;
    vector<int>nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int target;
    cin>>target;
    vector<int>ans=s.twoSum(nums,target);
    for(auto i:ans)
        cout<<i<<" ";
}