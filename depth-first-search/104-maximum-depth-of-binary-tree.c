#include <stdio.h>

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
}TreeNode;

int maxDepth(struct TreeNode *root) {
	if(NULL==root) return 0;
    
	int l_d=maxDepth(root->left);
	int r_d=maxDepth(root->right);

	return l_d>r_d? l_d+1 : r_d+1;
}

void main() {
	TreeNode *root;
	int ret = maxDepth(root);
	printf("the output is: %d\n", ret);	
}
