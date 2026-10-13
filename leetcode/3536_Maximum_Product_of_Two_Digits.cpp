#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(int n) {
        int mp=0;
        string s=to_string(n);
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                int nmp=(s[i]-'0')*(s[j]-'0');
                mp=max(nmp,mp);
            }
        }
        return mp;
    }
};
int main(){
    Solution s;
    cout<<s.maxProduct(123456)<<endl;
}