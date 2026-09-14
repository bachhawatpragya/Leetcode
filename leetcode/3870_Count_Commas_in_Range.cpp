#include <iostream>
using namespace std;

class Solution {
public:
    int countCommas(int n) {
        if(n<1000)return 0;
        return n-1000+1;
    }
};
int main(){
    Solution s;
    int n;
    cin>>n;
    cout<<s.countCommas(n);
    return 0;
}