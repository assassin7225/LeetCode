104. Maximum Depth of Binary Tree

Given a binary tree, find its maximum depth.
The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
 

// 一開始是想用DFS，不過我不知道寫了甚麼鬼東西出來就算了
// 給root，比較他的左子樹跟右子樹，如果他是空的話他會回傳0
// 再比較左子樹跟右子樹誰的深度大，回傳深度大的那一個
// 直接return 左子樹+1就可以少一個變數

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int maxDepth(struct TreeNode* root) {
  if (root==NULL){
    return 0;
  }

  else{
    int lDepth = maxDepth(root->left);
    int rDepth = maxDepth(root->right);

    if(lDepth>rDepth)
      return(lDepth+1);
    else
      return(rDepth+1);
  }
}