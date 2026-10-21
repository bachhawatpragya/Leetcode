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
int sum=0;
    void inorder(TreeNode* root, int low, int high){
        if(root==nullptr)return ;
        inorder(root->left, low, high);
        if(root->val>=low && root->val<=high){
            sum+=root->val;
        }
        inorder(root->right, low, high);
        
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        inorder(root, low, high);
        return sum;
    }
};
int main(){
    Solution s;
    TreeNode* root=new TreeNode(10);
    root->left=new TreeNode(5); 
    root->right= new TreeNode(15);
    root->left->left=new TreeNode(3);   
    root->left->right=new TreeNode(7);
    root->right->right=new TreeNode(18);
    int low= 7;
    int high= 15;
    int result= s.rangeSumBST(root, low, high);
    cout<<"Range sum of BST: "<<result<<endl;
    return 0;
}