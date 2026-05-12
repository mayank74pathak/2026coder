bool validate(TreeNode*root,long minvalue,long maxvalue)
{
    if(root==NULL)
    return true;
    if(root->val<=minvalue or root->val>=maxvalue)
    {
        return false;
    }
return validate(root->left,minvalue,root->val) and validate(root->right,root->val,maxvalue);
}
    bool isValidBST(TreeNode* root) {
      return   validate(root,LONG_MIN,LONG_MAX);
    }
};
