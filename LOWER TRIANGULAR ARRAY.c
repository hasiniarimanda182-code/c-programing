#include<stdio.h>
int main()
{
	int i,j,a[i][j],flag=0;
	printf("enter array elements:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(j>i&&a[i][j]!=0)
			{
			  flag=1;	
			}
		}
	}
	if(flag==0)
	{
		printf("Lower Triangular Matrix");
	}
	else
	{
		printf("Not a Lower Triangular Matrix");
	}
	return 0;
}
