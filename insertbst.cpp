class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode*add=new TreeNode(val);
        TreeNode*head=root;
        if(root ==NULL)

        return add;
        while(1)
        {
            if(root->val>val)
            {
                if(root->left==NULL)
                {
                    root->left=add;
                    break;
                }
                else
                {
                    root=root->left;
                }
            }
           else
           {
            if(root->right==NULL)
            {
                root->right=add;
                break;
            }
            else
            {
                root=root->right;
            }
           }
        }
    return head;
    }
};
