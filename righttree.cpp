lass Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        queue<TreeNode*>q;
        if(root==NULL)
        return ans ;

        q.push(root);
        while(!q.empty())
        {
             
           
          int n=q.size();
        
          for(int i=0;i<n;i++)
          {
            TreeNode*node=q.front();
          q.pop();
            if(node->left)
            {
               q.push(node->left);
               
            }
            if(node->right)
            {
                q.push(node->right);
                
            }
          if(i==n-1)
          {
            ans.push_back(node->val);
          }
          }
         
        }
    return ans ;
    }
};
