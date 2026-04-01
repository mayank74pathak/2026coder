int singleNonDuplicate(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        if(nums.size()==1)
        return nums[0];
         while(low<=high)
         {
            int mid=(low+high)/2;

            if((mid%2==0 and nums[mid]==nums[mid+1] ) or (mid%2!=0 and nums[mid]==nums[mid-1]))
                low=mid+1;
             else
             {
                high=mid-1;
             }   
         }
return nums[low];
    }
