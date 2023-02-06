/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    Stack<Integer> ans = new Stack<>();
    void iot(TreeNode root) {
        if (root == null) {
            ;
        } else {
            iot(root.left);
            ans.push(root.val);
            iot(root.right);
        }
    }
    public List<Integer> inorderTraversal(TreeNode root) {
        iot(root);
        System.out.println(ans);
        return (List)ans;
    }
}