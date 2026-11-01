#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class Solution {
public:
//yaha pr hum parent ko track kr raahe h {agr node ka left/right h toh usko parent node se connect kr reh}
    void parentTrack(TreeNode* root, unordered_map<TreeNode*, TreeNode*>&mp){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            if(curr->left){
                mp[curr->left]=curr;
                q.push(curr->left);
            } 
            if(curr->right){
                mp[curr->right]=curr;
                q.push(curr->right);
            } 
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode* , TreeNode*>parent_mp;
        parentTrack(root, parent_mp);
        unordered_map<TreeNode*, bool> visited;
        queue<TreeNode*>q;
        //taregt node ko visted mark kr dena
        visited[target]=true;
        //target node ko push krdo queue mei
        q.push(target);
        //distance for checking if we have reached upto k level
        int dist=0;
        while(!q.empty()){
            int size=q.size();
            //if reached we will break the loop and add the values from the queue to the resultant vector
            if(dist==k)break;
            //adding 1 to the dist as we are moving forward to another level right/left and upwards
            dist++;
            for(int i=0;i<size;i++){
                TreeNode* curr= q.front();
                q.pop();
                //checking if the current node has a left, right and a parent that hasnt been visited
                //if so we will mark them as visited and also push them respectively into the queue
                if(curr->left && !visited[curr->left]){
                    q.push(curr->left);
                    visited[curr->left]=true;
                }
                if(curr->right && !visited[curr->right]){
                    q.push(curr->right);
                    visited[curr->right]=true;
                }
                if(parent_mp[curr] && !visited[parent_mp[curr]]){
                    visited[parent_mp[curr]]=true;
                    q.push(parent_mp[curr]);
                }
            }
        }
        //resultant vector 
        vector<int> res;
        // as we came out of the loop we will push all the elements that are there in the queue into the resultant vector as we have reached the distance k we were looking for..
        while(!q.empty()){
            TreeNode* curr= q.front();
            q.pop();
            res.push_back(curr->val);
        }
        //hence return the result
        return res;
    }
};
int main(){
    Solution s;
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);
    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);

    int k = 2;
    vector<int> res = s.distanceK(root, root->left, k); // target is node with value 5
    for (int val : res) {
        cout << val << " ";
    }
    return 0;
}