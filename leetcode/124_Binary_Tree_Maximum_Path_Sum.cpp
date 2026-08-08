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
    int func(TreeNode* node){
        if(node==NULL)return 0;
        int l= max(0,func(node->left));
        int r= max(0,func(node->right));
        sum=max(sum,l+r+node->val);
        return max(l,r)+node->val;
    }
        int sum=INT_MIN;
    int maxPathSum(TreeNode* root) {
        func(root);
        return sum;   
    }
};
int main(){
    Solution s;
    TreeNode* root = new TreeNode(-10);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    cout<<s.maxPathSum(root)<<endl;
}