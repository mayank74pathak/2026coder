int maxDepth(TreeNode* root) {
        if (root==NULL)
        return 0;
        if(root->left)
        {
            int left=maxDepth(root->left);
        }
        if(root->right)
        {
            int right=maxDepth(root->right);
        }
    return max(left,right)+1;
    }
