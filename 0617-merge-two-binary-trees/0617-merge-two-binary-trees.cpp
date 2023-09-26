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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode* newNode = new TreeNode();
        if (root1 == nullptr and root2 == nullptr) {
            return nullptr;
        } 
        if (root1 == nullptr) {
            newNode->val = root2->val;
            newNode->left = mergeTrees(root1, root2->left);
            newNode->right = mergeTrees(root1, root2->right);
        }
        else if (root2 == nullptr) {
            newNode->val = root1->val;
            newNode->left = mergeTrees(root1->left, root2);
            newNode->right = mergeTrees(root1->right, root2);
        }
        else {
            newNode->val = root1->val + root2->val;
            newNode->left = mergeTrees(root1->left, root2->left);
            newNode->right = mergeTrees(root1->right, root2->right);
        }
        return newNode;
    }
};