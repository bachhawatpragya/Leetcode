#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        int open=0, close=0;
        string str="";
        int l=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') open++;
            else close++;
            if(open==close){
                str.insert(str.end(),s.begin()+l+1,s.begin()+i);
                l=i+1;
                open=close=0;
            }    
        }
        return str;
    }
};
int main(){
    Solution s;
    string str="(()())(())";
    cout<<s.removeOuterParentheses(str);
}