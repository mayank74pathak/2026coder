 #include<iostream>
 #include<vector>
 using namespace std;
 
 class minheap
 {
     vector<int>heap;
     public:
     void heapify(int index)
     {
         int size=heap.size();
         while(true)
         {
             int left=2*index+1;
             int right=2*index+2;
             int smallest=index;
             if(left<size and heap[smallest]>heap[left])
             {
                smallest=left;
             }
             if(right<size and heap[smallest]>heap[right])
             {
                 smallest=right;
             }
             if(smallest!=index)
             {
                 swap(heap[smallest],heap[index]);
                 index=smallest;
             }
             else
             {
                 break;
             }
         }
     
         
     }
 
 void deleted()
 {
     if(heap.empty())
     {
         cout<<"heap is empty";
         return ;
     }
     else
     {
         int size=heap.size()-1;
         heap[0]=heap[size];
         heap.pop_back();
         heapify(0);
     }
 }
 
    void insert(int val)
    {
        heap.push_back(val);
        int size=heap.size()-1;
        while(size>0)
        {
            int parent=(size-1)/2;
            if(heap[parent]>heap[size])
            {
                swap(heap[parent],heap[size]);
                size=parent;
            }
            else{
                break;
            }   
            
        }
    }
    void display()
    {
        if(heap.size()==0)
        cout<<"empty";
        for(int i=0;i<heap.size();i++)
        {
            cout<<heap[i]<<"\t";
            
        }
        cout<<"\n";
    }
     
 };
 
 int main(){
   minheap h;
   h.insert(45);
   h.insert(9);
   h.display();
   h.deleted();
h.display();
h.deleted();
h.display();   
 }
