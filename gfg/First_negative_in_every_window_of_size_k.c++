#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        int n=arr.size();
        vector<int>nums;
        queue<int>q;
        for(int i=0;i<k;i++){
            if(arr[i]<0)q.push(i);
        }
        for(int i=k;i<=n;i++){
            if(!q.empty())nums.push_back(arr[q.front()]);
            else nums.push_back(0);
            while(!q.empty() && q.front()<=i-k)q.pop();
            if(i<n && arr[i]<0)q.push(i);
        }
        return nums;
    }
};
int main(){
    Solution s;
    vector<int> arr={-8, 2, 3, -6, 10};
    int k=2;
    vector<int> ans=s.firstNegInt(arr,k);
    for(int i:ans)cout<<i<<" ";
}