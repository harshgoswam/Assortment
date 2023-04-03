#include<stdio.h>

 int main()
{
	int i,j,last,n=3,a[]={11,22,33,44,55};
	int length=sizeof(a)/sizeof(a[0]);

	printf("Values of Array=\n");
	for (i=0;i<length;i++)
	{
		printf("%d\t",a[i]);
	}
	for (i=0;i<n;i++)
	{
		last=a[length-1];

	for(j=length-1;j>0;j--)
	{
		a[j]=a[j-1];
		}
		a[0]=last;
	}
	printf("\n");

	printf("Right Rotation Array=\n");
	for (i=0;i<length;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
