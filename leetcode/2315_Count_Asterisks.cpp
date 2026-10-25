#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countAsterisks(string s) {
        int ans=0;
        int slash=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='|' && slash<2)slash++;
            if(slash==2)slash=0;
            else if(slash==0 && s[i]=='*' ){
                ans++;
            }
        }

        return ans;
    }
};
int main(){
    Solution s;
    string str = "l|*e*et|c**o|*de|";
    cout << s.countAsterisks(str) << endl;
    return 0;
}