#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};


class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        vector<int>ans;
        if(root==nullptr)return ans;
        map<int,int> mp;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            Node* node = it.first;
            int loc = it.second;
            if(mp.find(loc)==mp.end()){
                mp[loc]=node->data;
            }
            if(node->left){
                q.push({node->left,loc-1});
            }
            if(node->right){
                q.push({node->right,loc+1});
            }
        }
        for(auto i: mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};
 
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    Solution sol;
    vector<int> result = sol.topView(root);

    cout << "Top view of the binary tree: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}