  vector<int> topKFrequent(vector<int>& nums, int k) {
  
      unordered_map<int,int>freq;
     for(auto it:nums)
     {
        freq[it]++;
     }
     vector<vector<int>>bucket(nums.size()+1);
     for(auto&[num,count]:freq)
     {
        bucket[count].push_back(num);
     }
      vector<int>result;
     for(int i=bucket.size()-1;i>=0 && result.size()<k;i--)
     {
        for(auto it:bucket[i])
        {
            result.push_back(it);
        if(result.size()==k)
        break;
     } 
        }
        


return result;

    }
