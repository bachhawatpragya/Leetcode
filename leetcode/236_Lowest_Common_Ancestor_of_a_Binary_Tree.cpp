#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class Solution {
public:
    TreeNode* ans=nullptr;
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        func(root, p, q);
        return ans;
    }
    int func(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root==nullptr)return 0;
        int left=func(root->left, p,q);
        int right=func(root->right, p,q);
        int currans= (root==p || root==q)?1:0;
        if(left+right+currans==2 && ans==nullptr)ans=root;
        return currans+left+right;
    }
};
int main() {
    Solution s;
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);
    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);

    TreeNode* p = root->left; // Node with value 5
    TreeNode* q = root->left->right; // Node with value 2

    TreeNode* lca = s.lowestCommonAncestor(root, p, q);
    cout << "Lowest Common Ancestor of " << p->val << " and " << q->val << " is: " << lca->val << endl;

    // Clean up memory
    delete root->left->right->left;
    delete root->left->right->right;
    delete root->left->left;
    delete root->left;
    delete root->right->left;
    delete root->right->right;
    delete root;

    return 0;
}