class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int node=0;
        calculate(root,node);
        return node; 
    }
    int calculate(TreeNode*root,int &node)
    {
       if(root==NULL)
       return 0;
       int left=calculate(root->left, node);
       int right=calculate(root->right, node); 
       node=max(node,left+right);
       return max(left,right)+1;               
    }
};
