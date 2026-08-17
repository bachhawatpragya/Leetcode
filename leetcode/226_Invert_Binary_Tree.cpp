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
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr)return nullptr;
        swap(root->left,root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};
int main(){
    Solution sol;
    // Example usage:
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);

    TreeNode* invertedRoot = sol.invertTree(root);
    
    // Function to print the tree in-order for verification
    function<void(TreeNode*)> printInOrder = [&](TreeNode* node) {
        if (node == nullptr) return;
        printInOrder(node->left);
        cout << node->val << " ";
        printInOrder(node->right);
    };

    cout << "Inverted binary tree (in-order): ";
    printInOrder(invertedRoot);
    cout << endl;
    return 0;
}