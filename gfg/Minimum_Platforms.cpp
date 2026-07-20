#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        int n=arr.size();
        vector<int>hash(2501,0);
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
            hash[dep[i]+1]--;
        }
        int curr=0;
        int platform=0;
        for(int i=0;i<=2500;i++){
            curr+=hash[i];
            platform=max(curr,platform);
        }
        return platform;
    }
};

int main(){
    Solution s;
    vector<int> arr={900, 940, 950, 1100, 1500, 1800};
    vector<int> dep={910, 1200, 1120, 1130, 1900, 2000};
    int ans=s.minPlatform(arr,dep);
    cout<<ans<<endl;
    return 0;
}