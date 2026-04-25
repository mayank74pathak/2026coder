class Solution {
public:
  bool check(TreeNode*p,TreeNode*q)
{
    if(q==NULL and p==NULL)
    return true;

    if(q== NULL or p==NULL)
    return false;

  return p->val==q->val and check(p->left,q->right) and check(p->right,q->left); 
}
    bool isSymmetric(TreeNode* root) {
        bool ans ;
        if(root==NULL)
        return true;
        check(root->left,root->right);
    return ans ;
    }
