vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for (int i=0;i<nums.size();i++)
        {
            if(mp.find(target-nums[i])==mp.end())
            {
             mp[i].push_back(nums[i]);
            }
            else{
                return {mp[target-i],i};
            }
        }
    return {-1,-1};
    }
};
