import java.util.*;
public class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode() {}
    TreeNode(int val) { this.val = val; }
    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}
 
class Solution {
    public int cnt=0;
    int ans=0;
    public void inorderT(TreeNode root, int k){
        if(root==null)return;
        inorderT(root.left, k);
        cnt++;
        if(cnt==k){
            ans=root.val;
            return;
        }
        inorderT(root.right,k);
    }
    public int kthSmallest(TreeNode root, int k) {
        inorderT(root,k);
        return ans;
    }
    public static void main(String[] args) {
        Solution s = new Solution();
        TreeNode root = new TreeNode(3);
        root.left = new TreeNode(1);
        root.right = new TreeNode(4);
        root.left.right = new TreeNode(2);
        int k = 1;
        int result = s.kthSmallest(root, k);
        System.out.println("The " + k + "-th smallest element in the BST is: " + result); // Output: The 1-th smallest element in the BST is: 1
    }
}