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
    //the logic is , just traverse the binary tree in level wise and
    //store the items of a level in a vector and create another vector called res vector
    //which is used to store the average values.
    //after traversing a level , calculate the average of that level (which is done at line number 39)
    //and store it in res vector and finally return the res vector as answer.
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        if (root == NULL)
            return res;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty())
        {
            int len = q.size();
            vector<int> levelTraversal;
            for (int i = 0; i < len; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                if (node->left!=NULL)
                    q.push(node->left);
                if (node->right!=NULL)
                    q.push(node->right);
                levelTraversal.push_back(node->val);
            }
            double avg = (accumulate(levelTraversal.begin(),levelTraversal.end(),0.0))/levelTraversal.size();
            res.push_back(avg);
        }
        return res;
    }
};