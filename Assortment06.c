#include <stdio.h>

 main()
 
   {
     int i,j,a[100][100],sum=0,r,c;
	 
	 printf("Enter size = ");
     scanf("%d %d", &r,&c); 
     
       for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
	           printf("element - [%d],[%d] = ",i,j);
	           scanf("%d",&a[i][j]);
			   if (i==j) sum= sum+a[i][j];
            }
        } 
	        printf(" matrix =\n");
	   for(i=0;i<r;i++)
	    {
	        for(j=0;j<c ;j++)
	        {
	        printf("%d\t",a[i][j]);
	        }	   
		     printf("\n");
	    }
	     
       printf("Addition of diagonal elements  =%d\n",sum);
    }

