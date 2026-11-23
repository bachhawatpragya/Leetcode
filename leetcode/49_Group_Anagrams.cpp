#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mp;
        for(int i=0;i<strs.size();i++){
            string s= strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto& i: mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<string>str;
    str= {"eat","tea","tan","ate","nat","bat"};
     vector<vector<string>> ans =s.groupAnagrams(str);
     for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
     }
     return 0;
}