#include<stdio.h>
int main()
{
	int i,n,a[50],max=a[10];
	printf("array size:");
	scanf("%d",&n);
	printf("read array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("max element:");
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	printf("%d",max);
	return 0;
}
