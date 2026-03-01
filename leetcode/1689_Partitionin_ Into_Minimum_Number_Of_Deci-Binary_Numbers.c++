#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minPartitions(string n) {
        int maximum=0;
        for(char c:n){
            maximum=max(maximum,c-'0');
        }
        return maximum;
    }
};
int main(){
    Solution s;
    string n="32";
    cout<<s.minPartitions(n)<<endl;
    return 0;
}