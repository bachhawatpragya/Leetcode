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
    unordered_map<int,int> mp;
    int idx;
    TreeNode* BST(vector<int>&postorder, int left, int right){
        if(left>right)return nullptr;
        int val= postorder[idx--];
        TreeNode* root= new TreeNode(val);
        int mid=mp[val];
        root->right= BST(postorder, mid+1, right);
        root->left= BST(postorder, left, mid-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    idx=postorder.size()-1;
    for(int i=0;i<inorder.size();i++) mp[inorder[i]]=i;
    return BST(postorder, 0, inorder.size()-1);
    }
};
int main(){
    
    vector<int> inorder = {9, 3, 15, 20, 7};

    vector<int> postorder = {9, 15, 7, 20, 3};

    Solution obj;

    TreeNode* root = obj.buildTree(inorder, postorder);
    return ;
}   