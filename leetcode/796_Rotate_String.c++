#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        // base case
        if(s.length()!=goal.length())return false;
        //concatenate the string twice so u get to find the reversee also there itself
        s+=s;
        // now find if the goal is there or not!!
        /* this string::npos represents the largest possible value for the size_t type,
         which is an unsigned integer type used to represent sizes and counts in C++.
         It is typically used to indicate that a search operation did not find the desired substring. 
         If the find function returns string::npos, it means that the substring was not found in the string.*/
        return s.find(goal)!=string::npos;
    }
};

int main(){
    Solution s;
    string str,goal;
    cin>>str>>goal;
    cout<<s.rotateString(str,goal)<<endl;
}