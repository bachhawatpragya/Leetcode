#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n,-1);
        stack<int>stck;
        for(int i=2*n-1;i>=0;i--){
            while(!stck.empty() && stck.top()<=nums[i%n])stck.pop();
            
            if(i<n){
                if(!stck.empty()) res[i]=stck.top();
            }
            stck.push(nums[i%n]);
        }
        return res;
    }
};

int main(){
    Solution s;
    vector<int> nums={1,2,1};
    vector<int> res=s.nextGreaterElements(nums);
    for(int i:res)cout<<i<<" ";

    return 0;
}