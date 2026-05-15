#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            nums[i]=start+2*i;
        }
        int xorn=0;
        for(int i:nums){
            xorn^=i;
        }
        return xorn;
    }
};
int main(){
    Solution sol;
    int n=5, start=0;
    cout<<sol.xorOperation(n,start)<<endl;
    return 0;
}