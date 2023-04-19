#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
int minDepth(struct TreeNode* root){
    if (root == NULL) return 0;
    int left = minDepth(root->left);
    int right = minDepth(root->right);
    return (left == 0 || right == 0) ? left + right + 1: fmin(left, right) + 1;
}