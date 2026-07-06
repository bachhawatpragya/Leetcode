#include<vector>
#include<stack>
#include<unordered_map>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> stck;
        unordered_map<int,int> mp;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!stck.empty() && stck.top()<=nums2[i])stck.pop();
            if(stck.empty())mp[nums2[i]]=-1;
            else mp[nums2[i]]=stck.top();
            stck.push(nums2[i]);
        }
        vector<int>nxtg;
        for(int c:nums1){
            nxtg.push_back(mp[c]);
        }
        return nxtg;
    }
};

int main(){
    Solution s;
    vector<int> nums1={4,1,2};
    vector<int> nums2={1,3,4,2};
    vector<int> res=s.nextGreaterElement(nums1,nums2);
    for(int i:res)cout<<i<<" ";

    return 0;
}