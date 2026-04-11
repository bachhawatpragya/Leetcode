#include<bits/stdc++.h>
using namespace std;    
#pragma GCC optimize(O3);

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        int dist=INT_MAX;
        for(int  i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        for(auto &n : mp){
            vector<int>&v=n.second;
            for(int i=0;i+2<v.size();i++){
                dist=min(dist,2*(v[i+2]-v[i]));
            }
        }
        return (dist==INT_MAX?-1:dist);
    }
};

int main(){
    Solution s;
    vector<int> nums={1,2,3,1,2,3,1};
    cout<<s.minimumDistance(nums);
    return 0;
}