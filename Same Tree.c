100. Same Tree
Given two binary trees, write a function to check if they are equal or not.

Two binary trees are considered equal if they are structurally identical and the nodes have the same value.
 

// 這邊最蠢的地方在於，我就讓他左右子樹都判斷的很開心0.0
// 可是如果是空子樹的話就噴啦= =
// 所以就讓他兩邊各判斷有沒有，然後回傳and的結果就可以了

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    //判斷有沒有子樹(結構)
    //判斷val同樣否
    //空的子樹
    if (p == NULL && q== NULL){
        return true;
    }
    else if (p==NULL || q==NULL){
        return false;
    }
    else{
        if (p->val == q->val){
            bool lTree=isSameTree(p->left,q->left);
            bool rTree=isSameTree(p->right,q->right);
            return (lTree&&rTree);
        }
        else{
            return false;
        }
    }
}