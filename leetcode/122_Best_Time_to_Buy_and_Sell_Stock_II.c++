#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int total_profit=0;
        int p=prices.size();
        if(p<=1) return total_profit;
        for(int i=0;i<p;i++){
            if(i<p-1 && prices[i]<prices[i+1]){
                total_profit+=prices[i+1]-prices[i];
            }
        }
        return total_profit;
    }
};
int main() {
    Solution s;
    vector<int> prices={7,1,5,3,6,4};
    cout<<s.maxProfit(prices);
}