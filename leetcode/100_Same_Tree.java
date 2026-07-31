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
    public boolean isSameTree(TreeNode p, TreeNode q) {
        if(p==null &&  q==null)return true;
        if(p==null || q==null)return false;
        if(p.val!=q.val)return false;
        return isSameTree(p.left, q.left) && isSameTree(p.right,q.right);
    }
}
public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();
        
        // Create first tree
        TreeNode p = new TreeNode(1);
        p.left = new TreeNode(2);
        p.right = new TreeNode(3);
        
        // Create second tree
        TreeNode q = new TreeNode(1);
        q.left = new TreeNode(2);
        q.right = new TreeNode(3);
        
        boolean result = solution.isSameTree(p, q);
        System.out.println("Are the two trees the same? " + result);
    }
}