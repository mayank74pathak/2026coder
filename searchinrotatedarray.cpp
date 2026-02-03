int search(vector<int>& nums, int target) {
       
        int mid,l=0,r= nums.size()-1;

           while(l<=r)
           {
            mid=(l+r)/2;
            if(target==nums[mid])
            return mid;
            //left side sorted
            else if(nums[l]<=nums[mid]){
             if(nums[l]<=target and target<nums[mid])
            {
                  r=mid-1;
            }
            else{
                l=mid+1;
            }
            }
  //right side sorted
           else
           {
            if(nums[r]>=target and target>nums[mid])
            {
                  l=mid+1;
            }
            else{
                r=mid-1;
            }
           }
           }
    return -1;
    }
