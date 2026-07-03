#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canbeShipped(vector<int> &weights,int days, int capacity){
        int d=1;
        int currw=0;
        for(int w:weights){
            if(currw+w>capacity){
                d++;
                currw=0;
            }
            currw+=w;
        }
        return (d<=days);
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int strt=*max_element(weights.begin(), weights.end());
        int end= accumulate(weights.begin(),weights.end(),0);
        while(strt<=end){
            int mid= (strt+end)>>1;

            if(canbeShipped(weights, days,mid)) end=mid-1; 
            else strt=mid+1;
        }
        return strt;
    }
};
int main(){
    Solution s;
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days=5;
    cout<<s.shipWithinDays(weights,days)<<endl;
    return 0;
}