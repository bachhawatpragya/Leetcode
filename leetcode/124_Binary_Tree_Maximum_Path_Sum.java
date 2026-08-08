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
    public int sum=Integer.MIN_VALUE;
    public int func(TreeNode root){
        if(root==null)return 0;
        int l= Math.max(0,func(root.left));
        int r= Math.max(0,func(root.right));
        sum=Math.max(sum,l+r+root.val);
        return Math.max(l,r)+root.val;
    }
    public int maxPathSum(TreeNode root) {
        func(root);
        return sum;
    }
}
public void main(String[] args) {
    Solution s = new Solution();
    TreeNode root = new TreeNode(-10);
    root.left = new TreeNode(9);
    root.right = new TreeNode(20);
    root.right.left = new TreeNode(15);
    root.right.right = new TreeNode(7);
    System.out.println(s.maxPathSum(root));
}