#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int> nums;
        int maxright= arr[n-1];
        nums.push_back(maxright);
        for(int i=n-2;i>=0;i--){
            if(arr[i]>=maxright){
                maxright=arr[i];
                nums.push_back(maxright);
            }
        }
        reverse(nums.begin(),nums.end());
        return nums;
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
        vector<int> result = ob.leaders(arr);
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}