#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double myPow(double x, long n) {
        if(n==0)return 1;
        if(n==1)return x;
        if(n<0)return myPow(1/x,-n);
        else if(n%2==0) return myPow(x*x,n/2);
        return x*myPow(x*x,(n-1)/2);
    }
};

int main(){
    Solution s;
    cout<<s.myPow(2.00000,10)<<endl;
    return 0;
}
