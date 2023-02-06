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
    void iot(TreeNode root, ArrayList<Integer> ans) {
        if (root == null) {
            ;
        } else {
            iot(root.left, ans);
            ans.add(root.val);
            iot(root.right, ans);
        }
    }
    public List<Integer> inorderTraversal(TreeNode root) {
        ArrayList<Integer> ans = new ArrayList<>();
        iot(root, ans);
        return ans;
    }
}