import java.util.ArrayList;
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
    TreeNode prev,first,second;
    public void corrector(TreeNode root){
        if(root==null)return;
        corrector(root.left);
        if(prev!=null && root.val<prev.val){
            if(first==null)
                first=prev;
            second= root;
        }
        prev=root;
        corrector(root.right);

    }
    public void recoverTree(TreeNode root) {
        corrector(root);
        int temp=first.val;
        first.val=second.val;
        second.val=temp;
    }
    public static void main(String[] args) {
        Solution s = new Solution();
        TreeNode root = new TreeNode(1);
        root.left = new TreeNode(3);
        root.left.right = new TreeNode(2);
        s.recoverTree(root);
    }
}