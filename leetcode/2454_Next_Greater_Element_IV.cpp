#include<vector>
#include<stack>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> secondGreaterElement(vector<int>& nums) {
        int n=nums.size();
        stack<int> st1,st2;
        vector<int> res(n,-1);
        for(int i=0;i<n;i++){
            while(!st2.empty() && nums[st2.top()]<nums[i]){
                res[st2.top()]=nums[i];
                st2.pop();
            }
            vector<int> temp;
            while(!st1.empty() && nums[st1.top()]<nums[i]){
                temp.push_back(st1.top());
                st1.pop();
            }
            for(int j=temp.size()-1;j>=0;j--){
                st2.push(temp[j]);
            }
            st1.push(i);
        }

        return res;
    }
};

int main(){
    Solution s;
    vector<int> nums={2,4,0,9,6};
    vector<int> res=s.secondGreaterElement(nums);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }   
    return 0;
}