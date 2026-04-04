 void traversal(TreeNode* root ,vector<int>&inorder)
   {
    if(root==NULL)
    return ;
    if(root->left)
    {
        traversal(root->left ,inorder);
    }
    inorder.push_back(root->val);
   if(root->right)
   {
    traversal(root->right,inorder);
   }
   }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>inorder;
        if(root==NULL)
        return inorder;
        traversal(root,inorder);
    return inorder;
    }
