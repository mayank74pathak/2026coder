class Solution {
public:
    vector<int>in;
    void inorder(TreeNode*root)
    {
        if(root==NULL)
        return ;
        if(root->left)
        inorder(root->left);
         in.push_back(root->val);
         if(root->right)
         inorder(root->right);       
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL)
        return in;
    inorder(root);
    return in;
    }
};
