#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findPeaks(vector<int>& mountains) {
        vector<int>nums;
        for(int i=1;i<mountains.size()-1;i++){
            if(mountains[i]>mountains[i-1] && mountains[i]>mountains[i+1]){
                nums.push_back(i);
            }
        }
        return nums;
    }
};

int main(){
    Solution s;
    vector<int> mountains={1,3,2,4,1,5};
    vector<int> res= s.findPeaks(mountains);
    for(int i:res){
        cout<<i<<" ";
    }
    return 0;
}