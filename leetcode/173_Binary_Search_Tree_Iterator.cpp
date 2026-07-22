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
 
class BSTIterator {
public:
    vector<int>res;
    int index=-1;
    void inorder(TreeNode* root){
        if(root==nullptr)return ;
        inorder(root->left);
        res.push_back(root->val);
        inorder(root->right);
    }
    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    int next() {
        index++;
        return res[index];
    }
    
    bool hasNext() {
        if( index == res.size()-1) return false;
        return true;
    }
};
int main(){
    TreeNode* root = new TreeNode(7);
    root->left = new TreeNode(3);
    root->right = new TreeNode(15);
    root->right->left = new TreeNode(9);
    root->right->right = new TreeNode(20);
    BSTIterator* obj = new BSTIterator(root);
    int param_1 = obj->next();
    bool param_2 = obj->hasNext();
    cout<<"Next value: "<<param_1<<endl;
    cout<<"Has next value: "<<(param_2 ? "Yes" : "No")<<endl;
  return 0;
}
 