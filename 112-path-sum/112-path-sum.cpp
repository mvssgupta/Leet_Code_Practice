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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        targetSum=targetSum - root->val;
        if(targetSum==0 && root->left==NULL && root->right==NULL) 
            return true; //checking whether it is leaf node or not
        return hasPathSum(root->left,targetSum) || hasPathSum(root->right,targetSum); //checking in both right and left subtree
    }
};