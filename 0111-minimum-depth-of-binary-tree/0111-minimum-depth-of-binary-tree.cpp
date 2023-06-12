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
    int min_depth = INT_MAX;
    void traverse(TreeNode* node, int depth) {
        if (node) {
            if (!node->left and !node->right) {
                min_depth = min(min_depth, depth);
                return;
            }
            traverse(node->left, depth + 1);
            traverse(node->right, depth + 1);
        }
    }
    int minDepth(TreeNode* root) {
        if (!root) return 0;
        traverse(root, 1);
        return min_depth;
        
    }
};