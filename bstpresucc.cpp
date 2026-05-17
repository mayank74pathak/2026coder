class Solution {
  public:
  void suc(Node* root,int key,vector<Node*>&ans){
  Node*s=NULL;
  while(root!=NULL)
  {
      if(root->data<=key)
      {
          root=root->right;
      }
      else
      {
          s=root;
          root=root->left;
      }
  }
      ans.push_back(s);
      }
void pre(Node* root,int key,vector<Node*>&ans){
  Node*s=NULL;
  while(root!=NULL)
  {
      if(root->data>=key)
      {
          root=root->left;
      }
      else
      {
          s=root;
          root=root->right;
      }
  }
      ans.push_back(s);
      }      
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        vector<Node*>ans;
        pre(root,key,ans); 
        suc(root,key,ans);
       
       return ans; 
    }
};
