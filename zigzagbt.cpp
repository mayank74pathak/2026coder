lass Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root==NULL)
        return ans ;
        q.push(root);
        int k=1;
        while(!q.empty())
        {
            vector<int>level;
            int n=q.size();
            
            for(int i=0;i<n;i++)
            {
              TreeNode*node=q.front();
              q.pop();
              level.push_back(node->val);
              if(node->left)
              q.push(node->left);
              if(node->right)
              q.push(node->right);    
             }
              if(k%2!=0)
              ans.push_back(level);
               else{
                reverse(level.begin(), level.end());
ans.push_back(level);
               }
            k++;
        }
    return ans ;
    }
};
