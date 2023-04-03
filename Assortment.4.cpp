#include <stdio.h>

 main()
{
  int a[100][100],b[100][100],c[100][100],i,j,n;
  
       
        printf("Enter size = ");
        scanf("%d", &n); 
  

       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] = ",i,j);
	           scanf("%d",&a[i][j]);
            }
        }   
  
       printf("\n----------------\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] = ",i,j);
	           scanf("%d",&b[i][j]);
            }
        }       
       for(i=0;i<n;i++)
       {
        	for(j=0;j<n;j++)
        	{
        	  c[i][j]=a[i][j]+b[i][j];
	        }
        
       }

   printf("Addition of two matrix is = \n");
   
   for(i=0;i<n;i++)
   {
       printf("\n");
       
     for(j=0;j<n;j++)
	 {
	 
      printf("%d\t",c[i][j]);
       }
   
   printf("\n");
  }
}
