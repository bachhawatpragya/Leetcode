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
int dia=0;
    int diameterOfBinaryTree(TreeNode* root) {
        func(root);
        return dia;
    }
    int func(TreeNode* root){
        if(root==0)return 0;
        int left_height=func(root->left);
        int right_height=func(root->right);
        dia=max(dia, left_height+right_height);
        return max(left_height, right_height)+1;
    }
};
int main(){
    Solution s;
    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);
    cout<<s.diameterOfBinaryTree(root)<<endl;
    return 0;
}