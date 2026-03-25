#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        while(l<=h){
            int mid=(l+h)>>1;
            if(nums[mid]==target)return mid;
            else if(nums[mid]>=target)h=mid-1;
            else l=mid+1;
        }
        return -1;   
    }
};
int main(){
    Solution s;
    vector<int> nums={-1,0,3,5,9,12};
    cout<<s.search(nums,9)<<endl;
}