/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int getMinimumDifference(struct TreeNode* root) {
    long last = INT_MIN, diff = INT_MAX;
    getMinDiff(root, &last, &diff);
    
    return (int)diff;
}

void getMinDiff(struct TreeNode* root, long *last, long *diff) {
    if (root == NULL)
        return;
        
    getMinDiff(root->left, last, diff);
    if (root->val - *last < *diff)
        *diff = root->val - *last;
        
    *last = root->val;
    getMinDiff(root->right, last, diff);
    return;
}
