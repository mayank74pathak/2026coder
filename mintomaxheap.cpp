class Solution {
  public:
  void Heapify(vector<int>&arr,int N,int i)
  {
      int largest=i;
      int left=2*i+1;
      int right=2*i+2;
      if(left<N and arr[left]>arr[largest])
      {
          largest=left;
      }
       if(right<N and arr[right]>arr[largest])
      {
          largest=right;
      }
      
      if(largest!=i)
      {
          swap(arr[largest],arr[i]);
          Heapify(arr,N,largest);
      }
  }
  
    void convertMinToMaxHeap(vector<int> &arr, int N) {
        for (int i=(N/2)-1;i>=0;i--)
        {
            Heapify(arr,N,i);
        }
        
        
    }
};
