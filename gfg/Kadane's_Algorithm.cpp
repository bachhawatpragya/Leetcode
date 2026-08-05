#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int maxi=arr[0];
        int res=arr[0];
        for(int i=1;i<arr.size();i++){
            maxi=max(maxi+arr[i],arr[i]);
            res=max(maxi,res);
        }
        return res;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.maxSubarraySum(arr) << endl;
    }
    return 0;
}   