#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left=0,right=s.size()-1;
        while(left<=right){
            if(!isalnum(s[left]))left++;
            else if(!isalnum(s[right]))right--;
            else if(tolower(s[left])!=tolower(s[right]))return false; 
            else {
                left++;
                right--;
            }
        }
        return true;
    }
};
int main(){
    Solution s;
    string str="A man, a plan, a canal: Panama";
    bool result=s.isPalindrome(str);
    if(result){
        cout<<"The string is a palindrome."<<endl;
    } else {
        cout<<"The string is not a palindrome."<<endl;
    }
    return 0;
}