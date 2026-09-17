#include<bits/stdc++.h>
using namespace std;

class NumArray {
public:
    vector<int> sum;
    NumArray(vector<int>& nums) {
        int n=nums.size();
        sum.resize(n);
        sum[0]=nums[0];
        for(int i=1;i<n;i++){
            sum[i]=sum[i-1]+nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0)return sum[right];
        return sum[right]-sum[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

int main(){
    vector<int> nums={-2,0,3,-5,2,-1};
    NumArray* obj = new NumArray(nums);
    cout<<obj->sumRange(0,2)<<" ";
    cout<<obj->sumRange(2,5)<<" ";
    cout<<obj->sumRange(0,5)<<" ";
    return 0;
}