#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        int cnt=0;
        int maxi=0;
        for(int i:nums){
            mp[i]++;
        }
        for(auto& it: mp){
            maxi=max(maxi,it.second);
        }
        for(auto& it: mp){
            if(maxi==it.second)cnt+=maxi;
        }
        return cnt;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 2, 3, 3, 3}; // Example input
    int result = sol.maxFrequencyElements(nums);
    cout << "The count of elements with maximum frequency is: " << result << endl;
    return 0;
}