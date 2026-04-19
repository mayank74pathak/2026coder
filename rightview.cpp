 vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)
        return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            vector<int>helper;
            int n=q.size();
            for(int i=0;i<n;i++){
            TreeNode*node=q.front();
            q.pop();
            helper.push_back(node->val);
            if(node->left)
            {
                q.push(node->left);
            }
            if(node->right)
            q.push(node->right);
            }
          ans.push_back(helper[n-1]);
        } 
    return ans;
    }
