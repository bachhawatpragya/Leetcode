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
    void post(TreeNode* root, vector<int>& res){
        if(root==nullptr)return ;
        post(root->left,res);
        post(root->right,res);
        res.push_back(root->val);
         
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>res;
        post(root, res);
        return res;
    }
};
int main(){
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    vector<int> result = s.postorderTraversal(root);
    cout<<"Postorder Traversal: ";
    for(int val : result){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}