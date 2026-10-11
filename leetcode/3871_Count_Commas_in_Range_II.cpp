#include <iostream>
using namespace std;

class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000)return 0;
        long long i=1000;
        long long ans=0;
        while(i<=n){
            ans+=(n-i+1);
            i*=1000;
        }
        return ans;
    }
};
int main(){
    Solution s;
    long long n;
    cin>>n;
    cout<<s.countCommas(n);
    return 0;
}