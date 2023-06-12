/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int max_depth = INT_MIN;
    void traverse(TreeNode* node, int depth) {
        if (node) {
            max_depth = max(max_depth, depth);
            traverse(node->left, depth + 1);
            traverse(node->right, depth + 1);
        }
    }
    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        traverse(root, 1);
        return max_depth;
    }
};