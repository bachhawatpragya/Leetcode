#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double wind=0;
        double maxsum=INT_MIN;
        int j=0;
        for(int i=0;i<nums.size();i++){
            wind+=nums[i];
            if(i-j+1==k){
                maxsum=max(maxsum,wind);
                wind-=nums[j++];
            }
        }
        return maxsum/k;
    }
};
int main(){
    Solution s;
    vector<int> nums={1,12,-5,-6,50,3};
    int k=4;
    cout<<s.findMaxAverage(nums,k)<<endl;
}