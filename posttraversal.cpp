class Solution {
public:
vector<int>post;
    void postorder(TreeNode*root)
    {
        if(root==NULL)
        return;
        if(root->left)
        postorder(root->left);
        if(root->right)
        postorder(root->right);
        post.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==NULL)
        return post;
    postorder(root);
    return post;
    }

};
