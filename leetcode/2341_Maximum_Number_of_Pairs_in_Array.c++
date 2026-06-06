#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int fcnt=0,scnt=0,i=0;
        int n=nums.size();
        while(i<n-1){
            if(nums[i]==nums[i+1]){
                fcnt++;
                i+=2;
            }
            else{
                i++;
            }
        }
        scnt=n-(fcnt*2);
        return {fcnt,scnt};
    }
};
int main(){
    Solution s;
    vector<int> nums={1,3,2,1,3,2,2};
    vector<int> ans=s.numberOfPairs(nums);
    for(int i:ans) cout<<i<<" ";
    return 0;
}