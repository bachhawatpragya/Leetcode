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
    
    int maxtoburn(map<TreeNode*,TreeNode*>&mp, TreeNode* target){
        queue<TreeNode*>q;
        q.push(target);
        int maxxi=0;
        map<TreeNode*, int>visited;
        visited[target]=1;
        while(!q.empty()){
            int size=q.size();
            int burn=0;
            for(int i=0;i<size;i++){
                TreeNode* node= q.front();
                q.pop();
                if(node->left && !visited[node->left]){
                    burn=1;
                    visited[node->left]=1;
                    q.push(node->left);
                }
                if(node->right && !visited[node->right]){
                    burn=1;
                    visited[node->right]=1;
                    q.push(node->right);
                }
                if(mp[node] && !visited[mp[node]]){
                    burn=1;
                    visited[mp[node]]=1;
                    q.push(mp[node]);
                }
            }
            if(burn){
                maxxi+=burn;
            }
        }
        return maxxi;
    }

    TreeNode* BFStoParent(TreeNode* root, map<TreeNode*, TreeNode*>&mp, int strt){
        queue<TreeNode*>q;
        q.push(root);
        TreeNode* res;
        while(!q.empty()){
            TreeNode* node= q.front();
            if(node->val==strt)res=node;
            q.pop();
            if(node->left){
                mp[node->left]=node;
                q.push(node->left);
            }
            if(node->right){
                mp[node->right]=node;
                q.push(node->right);
            }
        }
        return res;
    }

    int amountOfTime(TreeNode* root, int start) {
        map<TreeNode*, TreeNode*>mp;
        TreeNode* target= BFStoParent(root, mp, start);
        int maxi=maxtoburn(mp, target);
        return maxi;
    }
};
int main() {
    Solution solution;
    
    // Create a binary tree for testing
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    
    int start = 2; // Starting node value for infection
    int timeToInfect = solution.amountOfTime(root, start);
    
    std::cout << "Time to infect the entire tree: " << timeToInfect << std::endl;

    // Clean up memory (delete nodes)
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}