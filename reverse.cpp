 int reverse(int x) {
       long  int rev=0;
        while(x!=0)
        {
          rev=rev*10+x%10;
          x/=10;
        }
     if(INT_MIN<=rev and rev<=INT_MAX)
        return rev;
        else
        return 0;
    }
