#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int fib(int n) {
        vector<int>dynamic_Arr(n+1,0);
        if(n==0 || n==1)return n;
        dynamic_Arr[0]=0;
        dynamic_Arr[1]=1;
        for(int i=2;i<=n;i++)
            dynamic_Arr[i]=dynamic_Arr[i-1]+dynamic_Arr[i-2];
        return dynamic_Arr[n];
    }
};
int main(){
    Solution s;
    int n=5;
    cout<<s.fib(n)<<endl;
    return 0;
}