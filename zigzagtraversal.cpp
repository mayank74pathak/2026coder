class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
     
        vector<vector<int>>ans;
        bool lefttoright=true;
        if(root==NULL)
        return ans;
         
        q.push(root);
        
        while(!q.empty())
        {
           int n =q.size();
           vector<int>level(n);
       for(int i=0;i<n;i++)
       {
        TreeNode*temp=q.front();
        q.pop();
        int index=lefttoright?i:n-1-i;
    level[index]=temp->val;
    if(temp->left)
    q.push(temp->left);
    if(temp->right)
    q.push(temp->right);

       }
lefttoright=!lefttoright;
ans.push_back(level);
        }
    return ans ;
    }
};
