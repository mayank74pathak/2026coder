 class BSTIterator {
public:
    stack<TreeNode*>s;
    void storeleft(TreeNode*root)
    {
        while(root!=NULL)
        {
            s.push(root);
            root=root->left;
        }
    }
    BSTIterator(TreeNode* root) {
        storeleft(root);
    }
    
    int next() {
        TreeNode*temp=s.top();
        s.pop();
        if(temp->right)
        {
            storeleft(temp->right);
        }
    return temp->val;
    }
    
    bool hasNext() {
        return !(s.empty());
    }
};
