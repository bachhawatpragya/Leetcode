#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int curr=arr[0];
        int maxi= arr[0];
        int onedel=arr[0];
        for(int i=1;i<arr.size();i++){
            onedel=max(curr,onedel+arr[i]);
            curr=max(arr[i],arr[i]+curr);
            maxi=max({maxi,curr,onedel});
        }
        return maxi; 
    }
};
int main(){
    Solution s;
    vector<int> arr={1,-2,0,3};
    cout<<s.maximumSum(arr);
    return 0;
}