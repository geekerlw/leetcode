#include <stdio.h>
#include <stdlib.h>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

typedef struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
}TreeNode_t;

struct TreeNode* invertTree(struct TreeNode* root) {
    struct Treenode *p=NULL;  
    if(!root)
        return root;

    p = invertTree(root->left);    
    root->left = invertTree(root->right);   
    root->right = p; 

    return root;
}

void main() {
	TreeNode_t* root;
	root = invertTree(root);
}
