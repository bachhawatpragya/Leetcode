#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       nums1.resize(m);
        for(int a:nums2){
            nums1.push_back(a);
        }
        sort(nums1.begin(),nums1.end()); 
    }
};

int main(){
    Solution s;
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    s.merge(nums1, 3, nums2, 3);
    for(int num:nums1){
        cout << num << " ";
    }
    cout << endl;
    return 0;
}