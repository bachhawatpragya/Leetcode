#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0,h=nums.size()-1;
        while(l<h){
            int mid=(l+h)>>1;
            if(nums[mid]>nums[mid+1]){
                h=mid;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};

int main(){
    Solution s;
    vector<int> nums={1,2,3,1};
    cout<<s.findPeakElement(nums);
    return 0;
}