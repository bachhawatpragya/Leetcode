#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int n) {
        
        vector<vector<int>> res(n);
        for(size_t i=0;i<n;i++){
            res[i].resize(i+1,1);
            // res[i][0]=res[i][i]=1;
            for(size_t j=1;j<i;j++){
                res[i][j]=res[i-1][j-1]+res[i-1][j];
            }
        }
        return res;
    }
};
int main(){
    Solution s;
    int n=5;
    vector<vector<int>> res=s.generate(n);
    for(size_t i=0;i<res.size();i++){
        for(size_t j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}