int singleNonDuplicate(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;
        int mid;
       if(nums.size()==1)
       return nums[0]; 
    while(l<=h)
    {
         mid=(l+h)/2;
        if((mid%2==0 and  nums[mid]==nums[mid+1] ) or(mid%2!=0 and nums[mid]==nums[mid-1]))
            l=mid+1;

        else
        h=mid-1;    
    }
    return nums[l];
    }
