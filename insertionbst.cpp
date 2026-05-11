TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode*add=new TreeNode(val);
        TreeNode*head=root;
        if(root==NULL)
        {
            return add;
        
        }
       while(root!=NULL)
       {
        if(root->val<val)
        {
            if(root->right==NULL)
            {
                root->right=add;
            break;
            }
            else
            {
                root=root->right;
            }
        
        }
        else  
        {
            if(root->left==NULL)
            {
                root->left=add;
            break;
            }
            else
            {
                root=root->left;
            }
        }
       
       }
return head;
    }
