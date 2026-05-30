#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string answerString(string word, int numFriends) {
        if(numFriends==1) return word;
        int n=word.size();
        int ele=n-numFriends+1;
        vector<int>v;
        char ch=*max_element(word.begin(),word.end());
        for(int i=0;i<n;i++){
            if(word[i]==ch)v.push_back(i);
        }
        string maxi="";
        for(int i:v){
            string str=(ele<=n-i)?word.substr(i,ele):word.substr(i);
            maxi= max(maxi,str);
        }
        return maxi;
    }
};
int main(){
    Solution s;
    string word="abcde";
    int numFriends=2;
    cout<<s.answerString(word,numFriends);
}