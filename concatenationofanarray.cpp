    vector<int> getConcatenation(vector<int>& nums) {
        int j=0;
        int n=nums.size();
         nums.resize(2 * n);   // increase size
        for(int i=n;i<nums.size();i++)
        {
            nums[i]=nums[j];
            j++;
        }
    return nums;
    }
TIMECOMPLEXITY=O(N)
SPACECOMPLEXITY=O(N)  
