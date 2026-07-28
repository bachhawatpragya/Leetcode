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
    ArrayList<Integer> post= new ArrayList<>();
    public void BST(TreeNode root){
        if(root==null)return;
        BST(root.left);
        BST(root.right);
        post.add(root.val);
    }
    public List<Integer> postorderTraversal(TreeNode root) {
        BST(root);
        return post;
    }
    public List<Integer> postorderTraversal2(TreeNode root) {
        ArrayList<Integer> post= new ArrayList<>();
        if(root==null)return post;
        Stack<TreeNode> stack= new Stack<>();
        stack.push(root);
        while(!stack.isEmpty()){
            TreeNode node= stack.pop();
            post.add(node.val);
            if(node.left!=null)stack.push(node.left);
            if(node.right!=null)stack.push(node.right);
        }
        Collections.reverse(post);
        return post;
    }
}
public class Solution {
    public List<Integer> postorderTraversal(TreeNode root) {
        List<Integer> res = new ArrayList<>();
        if (root == null) return res;
        Stack<TreeNode> stack = new Stack<>();
        stack.push(root);
        while (!stack.isEmpty()) {
            TreeNode node = stack.pop();
            res.add(node.val);
            if (node.left != null) stack.push(node.left);
            if (node.right != null) stack.push(node.right);
        }
        Collections.reverse(res);
        return res;
    }
}