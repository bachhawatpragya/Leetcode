#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool possiblebouq(int m, int k, int days, vector<int> & bloomDay){
        int count = 0, bouquet = 0;
        for(int x : bloomDay){
            if(x <= days){
                count++;
                if(count == k){
                    bouquet++;
                    count = 0;
                }
            }
            else{
                count = 0;
            }
        }
        return bouquet >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long req = (long long)m*k;
        if(n < req)return -1;
        int mini = *min_element(bloomDay.begin(),bloomDay.end());
        int maxi = *max_element(bloomDay.begin(),bloomDay.end());
        while(mini < maxi){
            int mid = (mini + maxi)>>1;
            if(possiblebouq(m,k,mid,bloomDay)){
                maxi = mid;
            }
            else{
                mini = mid + 1;
            }
        }
        return mini;
    }
};

int main(){
    Solution sol;
    vector<int> bloomDay = {1,10,3,10,2};
    int m = 3, k = 1;
    cout<<sol.minDays(bloomDay,m,k)<<endl;
    return 0;
}