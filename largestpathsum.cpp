class Solution {
public:
   int sumoftree(TreeNode*root,int &sum)
   {
    if(root==NULL)
    return 0;
    int left=sumoftree(root->left,sum);
    left=left>0?left:0;
    int right=sumoftree(root->right,sum);
    right=right>0?right:0;
    sum=max(sum,left+right+root->val);
    return max(left,right)+root->val;
   }  
    int maxPathSum(TreeNode* root) {
        int sum=INT_MIN;
        sumoftree(root,sum);
        
    return sum;
    }
};
