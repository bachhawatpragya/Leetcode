#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        vector<int> res;
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]=i;
        }
        int strt=0,end=0;
        for(int i=0;i<s.size();i++){
            end=max(end,mp[s[i]]);
            if(i==end){
                res.push_back(end-strt+1);
                strt=i+1;
            }
        }
        return res;
    }
};
int main(){
    Solution s;
    string str="ababcbacadefegdehijhklij";
    vector<int> res=s.partitionLabels(str);
    for(auto x:res){
        cout<<x<<" ";
    }
}