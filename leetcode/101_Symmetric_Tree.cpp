#include<bits/stdc++.h>
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
    bool leftright( TreeNode* p, TreeNode*q){
        if(p==nullptr && q==nullptr)return true;
        if(p==nullptr || q==nullptr)return false;
        return p->val==q->val && leftright(p->left,q->right) && leftright(p->right, q->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr)return true;
        return leftright(root->left,root->right);
    }
};
int main(){
    Solution sol;
    // Example usage:
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    bool isSymmetricTree = sol.isSymmetric(root);
    
    cout << "Is the binary tree symmetric? " << (isSymmetricTree ? "Yes" : "No") << endl;
    
    return 0;
}