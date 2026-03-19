#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int close=100000;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            int j=i+1,k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(target-close)>abs(target-sum)){
                    close=sum;
                }
                if(sum<target)j++;
                else k--;
                
            }
        }
        return close;
    }
};

int main(){
    Solution s;
    vector<int> nums={-1,2,1,-4};
    int target=1;
    cout<<s.threeSumClosest(nums,target)<<endl;
    return 0;
}