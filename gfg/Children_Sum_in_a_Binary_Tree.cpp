#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

class Solution {
  public:
    bool isSumProperty(Node *root) {
        // code here
        if(!root)return true;
        if(root->left==nullptr && root->right==nullptr)return true;
        int left=0, right=0;
        if(root->left)left=root->left->data;
        if(root->right)right=root->right->data;
        if(root->data != left+right)return false;
        return isSumProperty(root->left) && isSumProperty(root->right);
    }
};
int main() {
    Solution s;
    Node* root = new Node(10);
    root->left = new Node(8);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    cout << s.isSumProperty(root) << endl; // Output: 1 (true)
    return 0;
}