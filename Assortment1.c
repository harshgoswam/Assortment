
#include <stdio.h>

int main()
{
    int a [100],i, N;

    printf("Enter size of  array = ");
    scanf("%d", &N);

    for(i=0; i<N; i++)
    {
        printf("element - [%d] = ",i);
        scanf("%d", &a[i]);
    }

    printf("\n negative elements = ");
    for(i=0; i<N; i++)
    {
        if(a[i] < 0)
        {
            printf("%d\t", a[i]);
        }
    }
       printf("\n");


}
