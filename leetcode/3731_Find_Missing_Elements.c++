#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> missing;
        sort(nums.begin(),nums.end());
            for(int j=1;j<nums.size();j++){
                int curr=nums[j-1];
                int next=nums[j];
                while(curr+1<next){
                    missing.push_back(curr+1);
                    curr++;
                }
            }
        
        return missing;
    }
};
int main(){
    Solution s;
    vector<int> nums={1,3,5,7};
    vector<int> missing=s.findMissingElements(nums);
    for(int i:missing){
        cout<<i<<" ";
    }
    return 0;
}