class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root==NULL)
        return NULL;
        else if(root->val>key)
        {
            root->left=deleteNode(root->left,key);

        }
         else if(root->val<key)
          {
            root->right=deleteNode(root->right,key);
          }
          else{
            if(root->left==NULL and root->right==NULL)
            return NULL;
            else if(root->left==NULL)
            {
             return root->right;
            }
            else if(root->right==NULL)
            {
                return root->left;
            }
            
            
                TreeNode*succ=minnode(root->right);
                 root->val=succ->val;
                 root->right=deleteNode(root->right,succ->val);
            
       
          }
       return root;
    }
      TreeNode* minnode(TreeNode*root)
      {
        while(root->left!=NULL)
        {
            root=root->left;
        }
      return root;
      }

};
