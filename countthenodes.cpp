class Solution {
public:
    int countNodes(TreeNode* root) {
      if(root==NULL)
      return 0;

        int lh=left(root);
        int rh=right(root);
        if(lh==rh)
        return (1<<lh)-1;
        else
        {
           return  countNodes(root->left)+countNodes(root->right)+1;
        }


    }
   int left(TreeNode*node)
   {
    int h=0;
   while(node)
   {
    h++;
    node=node->left;
   }
   return h;
   }
int right(TreeNode*node)
   {
    int h=0;
   while(node)
   {
    h++;
    node=node->right;
   }
   return h;
   }


};
