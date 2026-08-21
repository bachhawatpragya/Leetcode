#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> ans;
    void backtrack(string curr, int open, int close, int n){
        if(curr.size()==n*2){
            ans.push_back(curr);
            return;
        }
        if(open<n){
            backtrack(curr+"(", open+1, close, n);
        }
        if(open>close){
            backtrack(curr+")", open, close+1, n);
        }
    }
    vector<string> generateParenthesis(int n) {
        backtrack("",0,0,n);
        return ans;
    }
};

int main(){
    Solution s;
    int n=3;
    vector<string> result = s.generateParenthesis(n);
    for(string str: result){
        cout<<str<<endl;
    }
    return 0;
}