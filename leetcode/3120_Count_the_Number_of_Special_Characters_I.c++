#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int> str;
        for(int i=0;i<word.size();i++){
            str[word[i]]++;
        }
        int cnt=0;
        for(auto w: str){
            char ch=w.first;
            if(islower(ch)){
                char upper= toupper(ch);
                if(str.find(upper)!=str.end()){
                    cnt++;
                }
            }
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