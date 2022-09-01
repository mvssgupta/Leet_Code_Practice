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
    int count=0;
    //the logic is while traversing the tree , I have maintained a 
    //maxVal variable which stores the maxVal encountered so far .
    //If we get an element maximum than that , we will increment the 
    //Count variable and change the maxVal.
    void solve(TreeNode *root , int maxVal)
    {
        if (root != NULL)
        {
            if(root->val>=maxVal) {
                count++;
                maxVal = root->val;
            }
            solve(root->left,maxVal);
            solve(root->right,maxVal);
        }
    }
    int goodNodes(TreeNode* root) {
        solve(root,root->val);
        return count;
    }
};