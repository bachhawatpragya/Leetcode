#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) { 
        sort(nums.begin(),nums.end());
        vector<vector<int>> np;
        do{
            np.push_back(nums);
        }while(next_permutation(nums.begin(),nums.end()));
        return np;
    }
};
int main(){
    Solution s;
    vector<int> nums={1,1,2};
    vector<vector<int>> ans=s.permuteUnique(nums);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}