#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        long sum=0;
        long cnt=0;
        for(int c:costs){
            sum+=c;
            if(sum<=coins) cnt++;
        }
        return cnt;
    }
};
int main(){
    Solution s;
    vector<int> costs={1,3,2,4,1};
    int coins=7;
    cout<<s.maxIceCream(costs,coins);
    return 0;
}