#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,r1,c1,r2,c2,k;
	printf("Enter row and column size of first array:");
	scanf("%d %d",&r1,&c1);
	printf("Enter row and column size of second array:");
	scanf("%d %d",&r2,&c2);
	if(c1==r2)
	{
		printf("Enter arrray elements:");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter second array elements:");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
			 for(k=0;k<c1;k++)
			 {
			 	c[i][j]+=a[i][k]*b[j][k];
			 }
		}
	}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d ",&c[i][j]);
			}
			printf("\n");
		}
	}
		if(r1!=c2)
		{
			printf("it is not possible to multiplicate");
		}
		return 0;
	}

