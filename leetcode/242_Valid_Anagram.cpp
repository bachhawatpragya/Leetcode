#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        int count[26]= {0};
        for(char c: s){
            count[c-'a']++;
        }
        for(char c: t){
            count[c-'a']--;
        }
        for(int i=0;i<26;i++){
            if(count[i]!=0)return false;;
        }
        return true;
    }
};
int main(){
    Solution s;
    string str1,str2;
    cin>>str1>>str2;
    cout<<s.isAnagram(str1,str2);
    return 0;
}
