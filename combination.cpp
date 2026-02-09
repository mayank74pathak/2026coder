void combination1(int ind,int target,vector<int >&arr,vector<vector<int>>&ans,vector<int>&a){
        if(ind==arr.size())
        {
            if(target==0)
            ans.push_back(a);
            return ;
        }
    if(arr[ind]<=target)
    {
        a.push_back(arr[ind]);
        combination1(ind,target-arr[ind],arr,ans,a);
        a.pop_back();
    }
    combination1(ind+1,target,arr,ans,a);
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>a;
        combination1(0,target,candidates,ans,a);
return ans;
    }
};
