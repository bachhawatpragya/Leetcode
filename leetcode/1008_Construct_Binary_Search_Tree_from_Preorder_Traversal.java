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
        int idx;
        public TreeNode BST(int[] preorder, int low, int high){
            if(idx==preorder.length)return null;
            int val= preorder[idx];
            if(val<low || val>high)return null;
            idx++;
            TreeNode nval= new TreeNode(val);
            nval.left=BST(preorder,low,val);
            nval.right=BST(preorder,val,high);
            return nval;
        } 
    public TreeNode bstFromPreorder(int[] preorder) {
        return BST(preorder, Integer.MIN_VALUE, Integer.MAX_VALUE);
    }
    public static void main(String []args){
        Solution s = new Solution();
        int[] preorder = {8, 5, 1, 7, 10, 12};
        TreeNode root = s.bstFromPreorder(preorder);
    }
}