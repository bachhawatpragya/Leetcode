#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
  bool possible(int mid, int k,vector<int>&stalls){
      int count=1;
      int lastposs=stalls[0];
      for(int i=1;i<stalls.size();i++){
          if(stalls[i]-lastposs>=mid){
              count++;
              lastposs=stalls[i];
          }
      }
      
      return (count>=k);
      
  }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        int n=stalls.size();
        sort(stalls.begin(),stalls.end());
        int right=stalls[n-1]-stalls[0];
        int low=1;
        while(low<=right){
            int mid=(low+right)>>1;
            if(possible(mid, k,stalls)){
                low=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return right;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        Solution ob;
        cout << ob.aggressiveCows(stalls, k) << endl;
    }
    return 0;
}