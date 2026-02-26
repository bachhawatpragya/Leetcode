#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>result;
        int bottom=m-1,left=0,right=n-1,top=0;
        
        while(top<=bottom && right>=left){
        //moving from top to right
            for(int i=left;i<=right;i++){
                result.push_back(matrix[top][i]);
            }
            top++;
         //moving from top to bottom
            for(int i=top;i<=bottom;i++){
                result.push_back(matrix[i][right]);
            }
            right--;
         //checking if the bottom is still greater than top cuz we altered the top earlier
            if(top<=bottom){
             //moving from bottom right to left
                for(int i=right;i>=left;i--){
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
         //checking if right is still gretaer than left as it was altered earlier
            if(right>=left){
             //moving from bottom to top
                for(int i=bottom;i>=top;i--){
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        //returning the stored spiral form of matrix
        return result;
    }
};

int main(){
    Solution s;
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    vector<int> result=s.spiralOrder(matrix);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}