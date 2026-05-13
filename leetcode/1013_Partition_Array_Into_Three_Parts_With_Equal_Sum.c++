#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(int i:arr){
            sum+=i;
        }
        if(sum%3!=0)return false;
        int curr=0, count=0;
        int target=sum/3;
        for(int i:arr){
            curr+=i;
            if(curr==target){
                count++;
                curr=0;
            }
        }
        return count>=3;
    }
};

int main(){
    Solution sol;
    vector<int> arr={0,2,1,-6,6,-7,9,1,2,0,1};
    cout<<sol.canThreePartsEqualSum(arr)<<endl;
    return 0;
}