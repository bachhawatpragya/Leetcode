#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int zerocnt=0, maxc=0;
        for(int r=0;r<nums.size();r++){
            if(nums[r]==0)zerocnt++;
            while(zerocnt>k){
                if(nums[l]==0){
                    zerocnt--;
                }
                l++;
            }
            maxc=max(maxc,r-l+1);
        }
        return maxc;
    }
};
int main(){
    Solution s;
    vector<int> nums={1,1,1,0,0,0,1,1,1,1,0};
    int k=2;
    cout<<s.longestOnes(nums,k)<<endl;
}