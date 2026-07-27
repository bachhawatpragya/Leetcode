#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
class Solution {
public:
    int ans=0;
    struct Info{
        bool isBST;
        int sum;
        int minVal;
        int maxVal;
    };

    Info findSum(TreeNode* root){
        if(root==nullptr)
            return {true, 0, INT_MAX, INT_MIN};
        Info left=findSum(root->left);
        Info right=findSum(root->right);
        if(left.isBST && right.isBST && root->val>left.maxVal && root->val < right.minVal){
            int CurrSum = left.sum+right.sum+root->val;
            ans=max(ans, CurrSum);
            return{true, CurrSum,min(root->val,left.minVal), max(root->val,right.maxVal)};
        }
        return{false, 0, INT_MIN, INT_MAX};
    } 
    int maxSumBST(TreeNode* root) {
        findSum(root);
        return ans;
    }
};
int main(){
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(4);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(2);
    root->right->right = new TreeNode(5);
    cout<<s.maxSumBST(root)<<endl;
}