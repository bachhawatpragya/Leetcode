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
    public int height(TreeNode root)
    {
        if(root==null)return 0;
        return Math.max(height(root.right),height(root.left))+1;
    }
    public boolean isBalanced(TreeNode root) {
        if(root==null)return true;
        int l=height(root.left);
        int r=height(root.right);
        int k=Math.abs(l-r);
        if(k>1)return false;
        return isBalanced(root.left) && isBalanced(root.right);
    }
}
public class Main {
    public static void main(String[] args) {
        TreeNode root = new TreeNode(1);
        root.left = new TreeNode(2);
        root.right = new TreeNode(3);
        root.left.left = new TreeNode(4);
        root.left.right = new TreeNode(5);

        Solution solution = new Solution();
        boolean isBalanced = solution.isBalanced(root);
        System.out.println("Is the binary tree balanced? " + isBalanced);
    }
}