class Solution {
public:
bool symmetric(TreeNode*root1,TreeNode*root2)
{
    if(!root1 and !root2)
    {
        return true;
    }
    if(!root1 or !root2)
    return false;

    return root1->val==root2->val and symmetric(root1->left,root2->right) and symmetric(root1->right,root2->left);

}

    bool isSymmetric(TreeNode* root) {
       bool ans ;
       if(!root)
       return true;
       ans=symmetric(root->left,root->right); 
    return ans;
    }
};
