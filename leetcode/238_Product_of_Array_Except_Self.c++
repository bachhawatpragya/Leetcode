#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> product(n);
        vector<int>rpro(n),lpro(n);
        lpro[0]=1;
        for(int i=1;i<n;i++){
            lpro[i]=lpro[i-1]*nums[i-1];
        }
        rpro[n-1]=1;
        for(int i=n-2;i>=0;i--){
            rpro[i]=rpro[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            product[i]=lpro[i]*rpro[i];
        }
        return product;
    }
};

int main(){
    Solution s;
    vector<int>nums={1,2,3,4};
    vector<int>ans=s.productExceptSelf(nums);
    for(int i:ans){
        cout<<i<<" ";
    }
}