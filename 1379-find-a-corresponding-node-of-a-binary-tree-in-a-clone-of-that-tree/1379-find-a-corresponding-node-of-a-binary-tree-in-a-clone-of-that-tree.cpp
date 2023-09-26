/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    TreeNode* result = NULL;
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        traverse(original, cloned, target);
        return result;
    }
private:
    void traverse(TreeNode* ogHead, TreeNode* cpyHead, TreeNode* target) {
        if (ogHead) {
            if (ogHead == target) {
                result = cpyHead;
                return;
            }
            traverse(ogHead->left, cpyHead->left, target);
            traverse(ogHead->right, cpyHead->right, target);
        }
    }
};