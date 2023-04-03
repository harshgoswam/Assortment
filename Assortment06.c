#include <stdio.h>

 main()
 
   {
     int i,j,a[100][100],sum=0,n;
	 
	 printf("Enter size = ");
     scanf("%d", &n); 
     
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] = ",i,j);
	           scanf("%d",&a[i][j]);
			   if (i==j) sum= sum+a[i][j];
            }
        } 
	        printf(" matrix =\n");
	   for(i=0;i<n;i++)
	    {
	        for(j=0;j<n ;j++)
	        {
	        printf("%4d",a[i][j]);
	        }	   
		     printf("\n");
	    }
	     
       printf("Addition of diagonal elements  =%d\n",sum);
    }

