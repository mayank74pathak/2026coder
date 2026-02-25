class Solution {
  public:
    bool isMaxHeap(int arr[], int n) {
     int index=0;
 
while(index<=(n-1)/2)
{
    int left=2*index+1;
    int right=2*index+2;
    if(arr[left]>arr[index] or arr[right]>arr[index])
    return false;

    index++;
}
   return true; 
    
    }
};
