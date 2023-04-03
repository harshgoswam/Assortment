#include <stdio.h>

main()
  
  {
  int a[100][100],b[100][100],i,j,r,c;
  

       printf("\n Enter rows and column size = ");
       scanf("%d %d",&r,&c);

       for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
	           printf("element - [%d],[%d] = ",i,j);
	           scanf("%d",&a[i][j]);
            }
        } 
  
       for(i=0;i<r;i++)
       {
            for(j=0;j<c;j++)
            {
                 b[j][i]=a[i][j];
            }
      }

           printf("\n transpose of a matrix  = ");
      for(i=0;i<c;i++)
	  {
            printf("\n");
            
           for(j=0;j<r;j++) 
		   {
           printf("%d\t",b[i][j]);
           }
       }
         printf("\n");
}

