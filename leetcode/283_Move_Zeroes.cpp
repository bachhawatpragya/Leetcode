#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) cnt++;
            else nums[k++]=nums[i];
        }
        while(cnt>0) {
            nums[k++]=0;
            cnt--;
        }
    }
    void moveZeroes1(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)swap(nums[i],nums[k++]);
        }
    }
};
int main()
{
    Solution s;
    vector<int> nums = {0, 1, 0, 3, 12};
    s.moveZeroes(nums);
    s.moveZeroes1(nums);
    cout << "Array after moving zeroes: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}