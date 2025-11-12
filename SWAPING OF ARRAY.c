#include<stdio.h>
int main()
{
	int i,j,temp,n,a[10];
	printf("enter n value:");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
	for(j=0;j<i-n-1;j++)
	{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
}
for(i=0;i<n;i++)
{
	printf("%d",a[i]);
}
return 0;
}
