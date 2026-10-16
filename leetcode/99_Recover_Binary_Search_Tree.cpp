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
    TreeNode* prev=nullptr;
    TreeNode* first=nullptr;
    TreeNode* second=nullptr;
    void finalarr(TreeNode* root){
        if(root==nullptr)return;
        finalarr(root->left);
        if(prev!=nullptr && prev->val > root->val ){
            if(first==nullptr)first=prev;
            second=root;
        }
        prev=root;
        finalarr(root->right);
    }
    void recoverTree(TreeNode* root) {
        finalarr(root);
        int temp= first->val;   
        first->val=second->val;   
        second->val=temp;   
    }
};
int main(){
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(3);
    root->left->right = new TreeNode(2);
    s.recoverTree(root);
    return 0;
}