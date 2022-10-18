class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum)
    {
        if(root == NULL)
        {
            return false;
        }
        if(root->left == NULL && root->right == NULL && root->val - targetSum == 0)
        {
            return true;
        }
        
        bool left = hasPathSum(root->left,targetSum - root->val);
        bool right = hasPathSum(root->right,targetSum - root->val);
        
        return left || right;
    }
};
