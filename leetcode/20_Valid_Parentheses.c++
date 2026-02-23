#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char>stck;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' ||s[i]=='['){
                stck.push(s[i]);
            }
            else{
                if(stck.empty())return false;
                else if((s[i]==')' && stck.top() =='(' ) ||
                        (s[i]=='}' && stck.top() =='{') || 
                        (s[i]==']' && stck.top() =='[')){
                    stck.pop();
                }
                else{
                    return false;
                }
            } 
        }
        return stck.empty();
    }
};

int main(){
    Solution s;
    string str;
    cin>>str;
    cout<<s.isValid(str)<<endl;
}