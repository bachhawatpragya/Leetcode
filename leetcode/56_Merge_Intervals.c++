#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.empty()) return {};
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        for(size_t i = 1; i < intervals.size(); ++i){
            if(intervals[i][0] <= res.back()[1]){
                res.back()[1] = max(intervals[i][1], res.back()[1]);
            } else {
                res.push_back(intervals[i]);
            }
        }
        return res;
    }
};
int main(){
    Solution s;
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    auto res = s.merge(intervals);
    for(const auto& interval : res){
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    cout << endl;
    return 0;
}