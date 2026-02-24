#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        sort(nums.begin(),nums.end());
        int maxlen=1,currlen=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])continue;
            else if(nums[i]==nums[i-1]+1)currlen++;
            else {
                maxlen=max(maxlen,currlen);
                currlen=1;
            }
        }
        maxlen=max(maxlen,currlen);
        return maxlen;   
    }
};

int main(){
    Solution s;
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];
    cout<<s.longestConsecutive(nums)<<endl;
}