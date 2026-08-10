#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        if(arr[0]!=1)arr[0]=1;
        for(int i=1;i<arr.size();i++){
            if((arr[i]-arr[i-1])<=1)continue;
            else arr[i]=arr[i-1]+1;
        }
        return arr[arr.size()-1];
    }
};

int main(){
    Solution s;
    vector<int> arr={2,2,1,2,1};
    int ans=s.maximumElementAfterDecrementingAndRearranging(arr);
    cout<<ans;
    return 0;
}