class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        queue<TreeNode*>q;
        if(root==NULL)
        return "";
        q.push(root);
        string s="";
        
        while(!q.empty())
        {
            TreeNode*node=q.front();
            q.pop();
             if(node==NULL)
             s.append("#,");
             else
             {
                s.append(to_string(node->val)+",");
                q.push(node->left);
                q.push(node->right); 
             }  

        }
     return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
         if (data=="")
         return NULL;
         string str;
         queue<TreeNode*>q;
         stringstream s(data);
         getline(s,str,',');
         TreeNode*root=new TreeNode(stoi(str));
         q.push(root);
         while(!q.empty())
         {
        TreeNode*node=q.front();
          q.pop();
          getline(s,str,',');
          if(str=="#")
          root->left=NULL;
          else
          {
            TreeNode*leftnode=new TreeNode(stoi(str));
            node->left=leftnode;
            q.push(leftnode);
          }
          getline(s,str,',');
          if(str=="#")
          root->right=NULL;
          else{
            TreeNode*rightnode=new TreeNode(stoi(str));
            node->right=rightnode;
            q.push(rightnode);
          }
         }
       return root;
    }
