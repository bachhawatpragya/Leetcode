#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minElement(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int sum=0;
            while(nums[i]>0){
                sum+=nums[i]%10;
                nums[i]/=10;
            }
            nums[i]=sum;
        }
        int mini=*min_element(nums.begin(),nums.end());
        return mini;
    }
};
int main(){
    Solution s;
    vector<int> nums={1,15,6,3};
    cout<<s.minElement(nums)<<endl;
    return 0;
}