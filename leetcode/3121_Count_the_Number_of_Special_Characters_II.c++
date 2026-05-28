#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>mp;
        for(int i=0;i<word.size();i++){
            
            if(islower(word[i])) {
                mp[word[i]] = i;
            }
            else {
                // store first uppercase only
                if(!mp.count(word[i])) {
                    mp[word[i]] = i;
                }
            }
        }
        int cnt=0;
        for(char c='a';c<='z';c++){
            char up=toupper(c);
            if(mp.count(c) && mp.count(up) && mp[c]<mp[up]) cnt++;
        }
        return cnt;
    }
};
int main(){
    Solution s;
    string word="aAAbbbb";
    cout<<s.numberOfSpecialChars(word)<<endl;
    return 0;
}