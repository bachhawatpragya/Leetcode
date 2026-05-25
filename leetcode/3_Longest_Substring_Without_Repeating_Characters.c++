#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int maxl=0;
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            while(mp[s[i]]>0){
                mp[s[left++]]--;
            }
            mp[s[i]]++;
            maxl=max(maxl,i-left+1);
        }
        return maxl;
    }
};
int main(){
    Solution sol;
    string s="abcabcbb";
    cout<<sol.lengthOfLongestSubstring(s)<<endl;
}