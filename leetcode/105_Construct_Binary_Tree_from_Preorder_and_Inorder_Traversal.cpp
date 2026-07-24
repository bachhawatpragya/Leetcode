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
    int idx=0;
    unordered_map<int, int> mp;
    TreeNode* BST(vector<int>& preorder, int low, int high){
        if(low >high)return nullptr;
        int val=preorder[idx++];
        
        TreeNode* root= new TreeNode(val);
        int mid=mp[val];
        root->left= BST(preorder, low,mid-1);         
        root->right= BST(preorder, mid+1,high);
        return root;         
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        return BST(preorder, 0, inorder.size()-1);
    }
};
int main(){
    TreeNode* root;
    vector<int> preorder = {3,9,20,15,7};
    vector<int> inorder = {9,3,15,20,7};    
    Solution obj;
    root = obj.buildTree(preorder, inorder);
    return 0;
}