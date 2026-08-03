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

    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==nullptr)return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>ans;
        while(!q.empty()){
            vector<int>level;
            int size=q.size();
            while(size--){
                TreeNode* node=q.front();
                q.pop();
                level.push_back(node->val);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            ans.push_back(level);
        }        
        return ans;
    }
};
int main(){
    Solution s;
    TreeNode* root=new TreeNode(3);
    root->left=new TreeNode(9);
    root->right=new TreeNode(20);
    root->right->left=new TreeNode(15);
    root->right->right=new TreeNode(7);
    vector<vector<int>>ans=s.levelOrder(root);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}