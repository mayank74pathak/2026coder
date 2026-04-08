 vector<int> searchRange(vector<int>& nums, int target) {
        return{firstpos(nums,target),secondpos(nums,target)};
    }
  int firstpos(vector<int>num,int target){
    int l=0,r=num.size()-1,sum=0;
    int f=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
         if(num[mid]==target)
         {
            f=mid;
            r=mid-1;
         }
         else if(num[mid]<target)
         {
            l=mid+1;
         }
         else
         r=mid-1;

    }
    
   return f;
  }

  int secondpos(vector<int>num,int target){
    int l=0,r=num.size()-1;
    int s=-1;
    while(l<=r)
    {
         int mid=(l+r)/2;
         if(num[mid]==target)
         {
            s=mid;
            l=mid+1;
         }
         else if(num[mid]<target)
         {
            l=mid+1;
         }
         else
         r=mid-1;

    }
    return s;
   
  }
