#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n=nums.size();
        vector<bool>B(n,false);
        int temp=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>temp){
                B[i]=true;
                temp=nums[i];
            }
        }
        temp=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(nums[i]>temp)
            {
                B[i]=true;
                temp=nums[i];
            }
        }
        vector<int>res;
        for(int i=0;i<n;i++){
            if(B[i])
                res.push_back(nums[i]);
        }
        return res;
    }
};
int main(){
    Solution s;
    vector<int>nums={1,3,2,4,5};
    vector<int>res=s.findValidElements(nums);
    for(auto i:res)
        cout<<i<<" ";
    return 0;
}