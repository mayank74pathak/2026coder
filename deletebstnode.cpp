TreeNode* deleteNode(TreeNode* root, int key) {
        if (root==NULL)
        return NULL;
        else if(root->val>key)
        {
            root->left=deleteNode(root->left,key);
        }
 else if(root->val<key)
        {
            root->right=deleteNode(root->right,key);
        }
 else
 {
    if(root->left==NULL and root->right==NULL)
    return NULL;
    if (root->left==NULL)
    return root->right;
   if (root->right==NULL)
    return root->left;


TreeNode*successor=findMin(root->right);
root->val=successor->val;
root->right=deleteNode(root->right,successor->val);
 
 }
    return root;
    }
 TreeNode *findMin(TreeNode*root)
 {
    while(root->left!=NULL)
    root=root->left;
    return root;
 }
