#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

class Solution {
  public:
  
    int findmaxDist(map<Node*,Node*>&mp, Node* start){
        queue<Node*>q;
        q.push(start);
        map<Node*,int>visited;
        int maxi=0;
        visited[start]=1;
        while(!q.empty()){
            int size=q.size();
            int burn=0;
            for(int i=0;i<size;i++){
                Node* node= q.front();
                q.pop();
                if(node->left && !visited[node->left]){
                    visited[node->left]=1;
                    burn=1;
                    q.push(node->left);
                }
                if(node->right && !visited[node->right]){
                    visited[node->right]=1;
                    burn=1;
                    q.push(node->right);
                }
                if(mp[node] && !visited[mp[node]]){
                    visited[mp[node]]=1;
                    burn=1;
                    q.push(mp[node]);
                }
            }
            if(burn)maxi++;
        }
        return maxi;
    }
  
    Node* BFStoParent(Node* root,map<Node*,Node*>&mp, int target){
        queue<Node*>q;
        q.push(root);
        Node* res;
        while(!q.empty()){
            Node* node=q.front();
            if(node->data==target)res=node;
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
    
    int minTime(Node* root, int target) {
        // code here
        map<Node*,Node*>mp;
        Node*start=BFStoParent(root,mp,target);
        int maxi= findmaxDist(mp,start);
        return maxi;
    }
};

int main(){
    // Create a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    Solution sol;
    int target = 5;
    int time = sol.minTime(root, target);
    cout << "Minimum time to burn the tree: " << time << endl;

    return 0;
}