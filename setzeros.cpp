 void setZeroes(vector<vector<int>>& matrix) {
        bool rowflag=false,colflag=false;
      
        for(int i=0;i<matrix.size();i++)
        {
             for (int j=0;j<matrix[0].size();j++)
             {
                if(matrix[i][j]==0)
                {
                    if(i==0)
                    colflag=true;
                    if(j==0)
                    rowflag=true;
                  matrix[i][0]=0;
                  matrix[0][j]=0;
                }
             } 
        }
    for(int i=1;i<matrix.size();i++)
    {
        for(int j=1;j<matrix[0].size();j++)
        {
            if(matrix[i][0]==0 or matrix[0][j]==0)
            matrix[i][j]=0;
            
        }
    }
   int i=0,j=0;  
 if(rowflag)
 {
   
    while(i<matrix.size())
    {
       matrix[i][0]=0;
     i++;
    }

 }
  if(colflag){
 
    while(j<matrix[0].size())
    {
        matrix[0][j]=0;
    j++;
    }

  }  
    
    }
