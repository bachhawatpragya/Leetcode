#include <bits/stdc++.h>
using namespace std; 
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>s;
        for(int i:nums){
            s.push_back(to_string(i));
        }
        sort(s.begin(),s.end(),[](string &a,string &b){
            return a+b>b+a;
        });
        if(s[0]=="0")return "0";
        string ans="";
        for(string str:s){
            ans+=str;
        }
        return ans;
    }
};
int main() {
    Solution solution;
    vector<int> nums = {3, 30, 34, 5, 9};
    string result = solution.largestNumber(nums);
    cout << "Largest Number: " << result << endl; // Output: "9534330"
    return 0;
}