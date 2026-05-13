class Solution {
public:
 void solve(TreeNode*root,int k,int &ans,int &count)
 {
    if(root==NULL)
    return ;
    solve(root->left,k,ans,count);
    count++;
    if(k==count)
    {
      ans=root->val;
    }
  solve(root->right,k,ans,count);
  return;
 }
    int kthSmallest(TreeNode* root, int k) {
        int ans;
        int count=0;
        solve(root,k,ans,count);
    
    return ans;}
};
