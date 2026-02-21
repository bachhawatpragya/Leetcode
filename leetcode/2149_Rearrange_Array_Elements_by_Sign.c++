#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>pos,neg;
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                pos.push_back(nums[i]);
            }
            else {
                neg.push_back(nums[i]);
            }
        }
        int i=0,pidx=0,nidx=0;
        while(pidx<pos.size() && nidx<neg.size()){
            nums[i++]=pos[pidx++];
            nums[i++]=neg[nidx++];
        }
        while(i<n && pidx<pos.size()){
            nums[i++]=pos[pidx++];
        }
        while(i<n && nidx<neg.size()){
            nums[i++]=neg[nidx++];
        }
        return nums;
    }
};
int main(){
    Solution s;
    vector<int>nums={3,1,-2,-5,2,-4};
    vector<int>ans=s.rearrangeArray(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}