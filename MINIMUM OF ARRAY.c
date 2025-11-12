#include<stdio.h>
int main()
{
	int i,n,a[50],min;
	printf("enter n value:");
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
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i],min)
		{
			min=a[i];
		}
	}
	printf("minimum element:%d",min);
	return 0;
}
