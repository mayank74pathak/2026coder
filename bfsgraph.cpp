 vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        vector<int>ans;
        queue<int>q;
        int n=adj.size();
        
        q.push(0);
        int vis[n]={0};
        vis[0]=1;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto it:adj[node])
            {
                if(!vis[it]){
                    vis[it]=1;
                
                    q.push(it);
                }
            }
        }
        
    
        return ans;
    }
