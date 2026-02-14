class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int node=0;
        diameter(root,node);
        return node-1;
    }
    int diameter(TreeNode* root,int &node)
    {
       if(root==NULL)
       {
        return 0;
       }
       int left=diameter(root->left,node);
       int right=diameter(root->right,node);
       node=max(node,left+right+1);
       return max(left ,right)+1;

    }
};
