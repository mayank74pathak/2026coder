TreeNode* searchBST(TreeNode* root, int val) {
        
        if (val==root->val)
        return root;

        while(root)
        {
            if(root->val==val)
                return root;

            else if(root->val>val)
            {
                root=root->left;
            } 
            else
            root=root->right;

        }
return NULL;
    }
