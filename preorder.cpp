class Solution {
public:
    vector<int>ans;//take global vector
    void preorder(TreeNode* root)
    {
        if(root==NULL)
        return ;
        ans.push_back(root->val);
        if(root->left)preorder(root->left);
        if(root->right)preorder(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
      if(root==NULL) return ans;
        preorder(root);//no need return to any variable
      return ans;
    }
};
