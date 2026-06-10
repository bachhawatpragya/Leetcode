#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int maxarea=INT_MIN;
        while(l<r){
            int h = min(height[l],height[r]);
            int area = h*(r-l);
            maxarea = max(maxarea,area);
            if(height[l]>height[r]){
                r--;
            }
            else{
                l++;
            }
        }
        return maxarea;
    }
};
int main(){
    Solution s;
    vector<int> height={1,8,6,2,5,4,8,3,7};
    cout<<s.maxArea(height);
}