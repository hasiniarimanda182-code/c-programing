#include<stdio.h>
int main()
{
	int i,n,a[50];
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
	printf("reverse of elements:");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
