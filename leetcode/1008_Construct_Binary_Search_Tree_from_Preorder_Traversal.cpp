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
int idx;
    TreeNode*  BST(vector<int> &preorder, int high, int low){
        if(idx==preorder.size())return nullptr;
        int val= preorder[idx];
        if(val<low|| val>high)return nullptr;
        idx++;
        TreeNode* root= new TreeNode(val);
        root->left=BST(preorder, val, low);  
        root->right=BST(preorder, high, val);  
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return BST(preorder,INT_MAX, INT_MIN);
    }
};
int main(){
    Solution s;
    vector<int> preorder = {8, 5, 1, 7, 10, 12};
    TreeNode* root = s.bstFromPreorder(preorder);

    // Function to print the inorder traversal of the BST
    function<void(TreeNode*)> inorderTraversal = [&](TreeNode* node) {
        if (node == nullptr) return;
        inorderTraversal(node->left);
        cout << node->val << " ";
        inorderTraversal(node->right);
    };

    cout << "Inorder Traversal of the constructed BST: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}