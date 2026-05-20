 class Solution {
public:
    TreeNode*prev=nullptr,*first=nullptr,*sec=nullptr;
    void inorder(TreeNode*cur){
        if(!cur)
        return;
        inorder(cur->left);
        if(prev!=NULL and cur->val<prev->val)
        {
            if(!first)
            first=prev;
            sec=cur;
        }
    prev=cur;
    inorder(cur->right);
    }
    
    
    void recoverTree(TreeNode* root) {
        inorder(root);
        swap(first->val,sec->val);
        
    }
};
