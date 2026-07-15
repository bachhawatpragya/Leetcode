#include<bits/stdc++.h>
using namespace std;
    class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        int cnt=(sum/k>=threshold);
        for(int i=k;i<n;i++){
            sum+=arr[i];
            sum-=arr[i-k];
            if(sum/k>=threshold)cnt++;
        }
        return cnt;
    }
};
int main(){
    Solution s;
    vector<int> arr={2,2,2,2,5,5,5,8};
    int k=3;
    int threshold=4;
    int ans=s.numOfSubarrays(arr,k,threshold);
    cout<<ans;
    return 0;
}