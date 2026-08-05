#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n/2;i++)
            swap(arr[i],arr[n-i-1]);
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
        ob.reverseArray(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}