vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>merged;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size();i++)
        {
            if(merged.empty()){
                merged.push_back(intervals[i]);
            }
            else{
                vector<int>&v=merged.back();
                if(v[1]>=intervals[i][0])
                {
                    v[1]=max(v[1],intervals[i][1]);
                }
                 else
                 {
                    merged.push_back(intervals[i]);
                 }
            }
        }   

return merged;
    }
