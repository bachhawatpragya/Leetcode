#include<bits/stdc++.h>
using namespace std;
//this line is a compiler directive -> optimizes the program -> for maximum speed 
#pragma GCC optimize("O3")
class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int dist=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int count=1;
            for(int j=i+1;j<nums.size();j++){
                    if(nums[i]==nums[j]){
                        count++;
                        if(count==3){
                            
                            int d=2*(j-i);
                            dist=min(dist, d);
                        }
                    }
            }
        }
        return (dist==INT_MAX?-1:dist);
    }
};
int main(){
    Solution s;
    vector<int> nums={1,2,3,1,2,3,1};
    cout<<s.minimumDistance(nums);
    return 0;
}