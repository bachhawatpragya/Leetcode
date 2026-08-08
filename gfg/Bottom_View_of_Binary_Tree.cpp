#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // code here
        vector<int>ans;
        if(root==nullptr)return ans;
        map<int,int>mp;
        queue<pair<Node*, int>>q;
        q.push({root,0});
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            Node* node= it.first;
            int loc = it.second;
            mp[loc]=node->data;
            if(node->left)q.push({node->left,loc-1});
            if(node->right)q.push({node->right,loc+1});
        }
        for(auto i:mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};

int main(){
    Solution sol;
    // Example usage:
    Node* root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(22);
    root->left->left = new Node(5);
    root->left->right = new Node(3);
    root->right->right = new Node(25);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);

    vector<int> result = sol.bottomView(root);
    cout << "Bottom view of the binary tree: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}