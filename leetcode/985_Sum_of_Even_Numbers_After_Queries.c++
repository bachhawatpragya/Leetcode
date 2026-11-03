#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> sum;
        int n=queries.size();
        for(int i=0;i<n;i++){
            int numsum=0;
            nums[queries[i][1]]+=queries[i][0];
            for(int j=0;j<nums.size();j++){
                if(nums[j]%2==0)numsum+=nums[j];
            }
            sum.push_back(numsum);
        }
        return sum;
    }
};
int main(){
    Solution s;
    vector<int> nums={1,2,3,4};
    vector<vector<int>> queries={{1,0},{-3,1},{-4,0},{2,3}};
    vector<int> res=s.sumEvenAfterQueries(nums,queries);
    for(auto i:res){
        cout<<i<<" ";
    }
    return 0;
}