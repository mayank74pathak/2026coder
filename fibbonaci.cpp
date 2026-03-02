class Solution {
public:
    int fib(int n) {
        int a=0;
        int b=1;
        int fibb=0;
        int i=1;
       if(n==1)
       return 1;
       while(i<n)
       {
        fibb=a+b;
        a=b;
        b=fibb;
       i++;
       }  
return fibb;
    }
};
