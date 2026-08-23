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
    vector<string>res;
    void found(TreeNode* root, vector<int>&ans ){
            if(root==nullptr)return;
            ans.push_back(root->val);
            if(root->left==nullptr && root->right==nullptr){
                string s="";
                for(int i=0;i<ans.size();i++){
                    s+=to_string(ans[i]);
                    if(i!=ans.size()-1)s+="->";
                }
                res.push_back(s);
                ans.pop_back();
                return;
            }
            found(root->left, ans);
            found(root->right, ans);
            ans.pop_back();
            return;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==nullptr)return {};
        vector<int>ans;
        found(root,ans);
        return res;
    }
};
int main(){
    Solution sol;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);

    vector<string> paths = sol.binaryTreePaths(root);
    cout << "Binary tree paths: ";
    for (const string& path : paths) {
        cout << path << " ";
    }
    cout << endl;

    // Clean up memory
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}k