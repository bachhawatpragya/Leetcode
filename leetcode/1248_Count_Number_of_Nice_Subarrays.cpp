#include <bits/stdc++.h>
using namespace std;    

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)nums[i]=0;
            else nums[i]=1;
        }
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0, fans=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mp.find(sum-k)!=mp.end()){
                fans+=mp[sum-k];
            }
            mp[sum]++;
        }
        return fans;
    }
};
int main(){
    Solution s;
    vector<int> nums = {1,1,2,1,1};
    int k = 3;
    int ans = s.numberOfSubarrays(nums, k);
    cout << ans << endl;
    return 0;
}