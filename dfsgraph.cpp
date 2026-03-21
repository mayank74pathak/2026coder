  void dfsgraph(int node,vector<vector<int>>& adj,int vis[],vector<int>&dfs)
    {
      vis[node]=1;
      dfs.push_back(node);
      for(auto it:adj[node]){
          if(!vis[it]){
             
             dfsgraph(it,adj,vis,dfs);  
          }
      }
    }
    
    
    vector<int> dfs(vector<vector<int>>& adj) {
        int n=adj.size();
        int vis[n]={0};
        vector<int>dfs;
       vis[0]=1;
        dfsgraph(0,adj,vis,dfs);
        return dfs;
    }
