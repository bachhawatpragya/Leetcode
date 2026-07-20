#include <bits/stdc++.h>
using namespace std;
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};


class Solution {
  public:
  
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        
        Node* predecessor = nullptr;
        Node* successor = nullptr;
        Node* curr=root;
        while(curr!=nullptr){
            if(curr->data<key){
                predecessor=curr;
                curr=curr->right;
            }
            else curr=curr->left;
        }
        curr=root;
        while(curr!=nullptr){
            if(curr->data>key){
                successor=curr;
                curr=curr->left;
            }
            else curr=curr->right;
        }
        return {predecessor, successor};
        
    }
};
int main(){
    Node* root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(70);
    root->left->left = new Node(20);
    root->left->right = new Node(40);
    root->right->left = new Node(60);
    root->right->right = new Node(80);

    Solution sol;
    vector<Node*> result = sol.findPreSuc(root, 50);
    return 0;
}