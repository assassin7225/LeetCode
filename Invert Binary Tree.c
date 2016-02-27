226. Invert Binary Tree

 Invert a binary tree.

      4
    /   \
   2     7
  / \   / \
 1   3 6   9

 to

      4
    /   \
   7     2
  / \   / \
 9   6 3   1
 

// 這邊我困擾的點是我到底要回傳三小= =
// 先判定是不是空的樹
// 再來創一個temp node暫存一下
// 把link左右交換，然後一樣也是對左右子樹各做遞迴

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root) {
    if(root==NULL){
        return 0;
    }
    else{
        struct TreeNode* temp;
        temp = root->left;
        root->left = root->right;
        root->right = temp;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
}