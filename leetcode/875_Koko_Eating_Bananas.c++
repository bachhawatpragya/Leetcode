#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int minSpeed(vector<int>& piles, int speed) {
        int k=0;
        for(int x: piles){
            k+= (x+speed-1)/speed;
        }
        return k;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maximum= *max_element(piles.begin(), piles.end());
        int l=1, r=maximum;
        while(l<r){
            int mid=(l+r)>>1;
            if(minSpeed(piles, mid)<=h){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return r;
    }

};
int main(){
    Solution sol;
    vector<int> piles={3,6,7,11};
    int h=8;
    cout<<sol.minEatingSpeed(piles,h)<<endl;
    return 0;
}