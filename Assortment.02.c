#include <stdio.h>

int main() {
    int a[100], i,n,f,s;
	printf("Enter size of array=");
	scanf("%d",&n);
	
	 for(i = 0; i <n; i++)
	 {
        scanf("%d", &a[i]);
   	 }
	
    for(i = 0; i <n; i++)
    
	 {
        if(a[i] > f)
		 {
            s = f;
            f = a[i];
        }
        else if(a[i] > s && a[i] != f) 
		{
            s = a[i];
        }
    }

    printf("Second largest number  = %d", s);

}

