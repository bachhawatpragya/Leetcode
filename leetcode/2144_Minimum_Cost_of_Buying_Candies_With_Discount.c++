#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumCost(vector<int>& cost) {
       sort(cost.begin(),cost.end(),greater<int>());
       int minc=0;
       for(int i=0;i<cost.size();i++){
            if(i%3!=2){
                minc+=cost[i];
            }
       }
       return minc;
    }
};
int main(){
    Solution s;
    vector<int> cost={1,2,3};
    cout<<s.minimumCost(cost)<<endl;
    return 0;
}