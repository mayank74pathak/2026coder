 vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid[0].size(),k=0,duplicate,miss;
        vector<bool>arr(n*n+1,false);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[grid[i][j]]==true)
                {
                    duplicate=grid[i][j];
                }
                else
                arr[grid[i][j]]=true;
            }
        }
       for(int i=1;i<=n*n;i++)
       {
        if(arr[i]==false)
         miss=i;
       }
    return {duplicate,miss};
    }
