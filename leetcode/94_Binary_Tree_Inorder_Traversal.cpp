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
    void inorder(TreeNode* root, vector<int>&res){
        if(root==nullptr)return;
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>res;
        inorder(root, res);
        return res;
    }
};

int main(){
    Solution s;
    TreeNode* root= new TreeNode(1);
    root->right= new TreeNode(2);
    root->right->left= new TreeNode(3);
    vector<int> result= s.inorderTraversal(root);
    cout<<"Inorder Traversal: ";
    for(int val: result){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}