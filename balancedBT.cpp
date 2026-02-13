class Solution {
public:
    int dfschecker(TreeNode*root ,bool &checkbalance)
    {
         if(root==NULL)
         return 0;
         int left=dfschecker(root->left,checkbalance);
         int right=dfschecker(root->right,checkbalance);
         if(abs(left-right)>1)
         {
            checkbalance =false;
         }
         return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
        bool checkbalance=true;
        if(root==NULL)
        return checkbalance;
        dfschecker(root,checkbalance);
        return checkbalance;
    }
};
