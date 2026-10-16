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
    TreeNode prev=null;
    boolean valid=true;
    public void inorder(TreeNode root){
        if(root==null)return;

        inorder(root.left);
        if(prev!=null){
            if(prev.val>=root.val){
                valid=false;
                return;
            }
        }
        prev=root;
        inorder(root.right);

    }
    public boolean isValidBST(TreeNode root) {
        inorder(root);
        return valid;
    }
    public static void main(String[] args) {
        Solution s = new Solution();
        TreeNode root = new TreeNode(2);
        root.left = new TreeNode(1);
        root.right = new TreeNode(3);
        boolean result = s.isValidBST(root);
        System.out.println("Is the binary tree a valid BST? " + result); // Output: Is the binary tree a valid BST? true
    }
}