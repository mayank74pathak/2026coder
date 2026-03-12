void moveZeroes(vector<int>& nums) {
        int i=0,j,count=0;
        int n=nums.size();
        for(int j=0;j<nums.size();j++)
        {
        
        if(nums[j]!=0)
        {
            nums[i]=nums[j];
            i++;
        }
        
        }
   int k=n-i;
      j=0;
     cout<<k;
     while(j<k)
     {
        nums[i]=0;
    i++;
     j++;
     }
     
    }
