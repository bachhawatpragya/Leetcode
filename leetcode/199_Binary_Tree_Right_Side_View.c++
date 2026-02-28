#include<bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.*/
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
    void RightDFS(TreeNode* root, int level, vector<int>&result){
        //base case check if my root is empty thus tree is emptyn so return
        if(!root)return;
        // check if the curr_level == my curr_index_result_vector
        // that means we are checking if the level is beinng visited for the first time 
        if(level==result.size())result.push_back(root->val);
        //first checking ini the right side for the right view
        RightDFS(root->right,level+1,result);
        //if not found anything in the right side we move towards the left child
        RightDFS(root->left,level+1,result);

    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>result;
        RightDFS(root,0,result);
        return result;
    }
    
};
// main function to test the solution
int main() {
    Solution sol;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(4);

    vector<int> rightView = sol.rightSideView(root);

    // Print the right side view
    for (int val : rightView) {
        cout << val << " ";
    }
    cout << endl;

    // Clean up memory (delete the tree)
    delete root->left->right;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}