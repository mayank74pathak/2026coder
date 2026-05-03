class Solution {
  public:
  void children(Node*root,bool &cs)
  {
    if(root==NULL or cs==false)
    return ;
    int left = (root->left) ? root->left->data : 0;
    int right = (root->right) ? root->right->data : 0;
     
      if(root->left!=NULL or root->right!=NULL)
      {
          if(root->data!=left+right)
           {
           cs=false;
            return ;
           }
      }
     
      
         
      children(root->left,cs);
      children(root->right,cs);
      
  }
  
  
    bool isSumProperty(Node *root) {
        // code here
        bool cs=true;
    children(root,cs);
        return cs;
    }
};
