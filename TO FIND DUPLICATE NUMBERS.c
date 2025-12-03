#include<stdio.h>
int main()
{
	int i,j,a[10],n,found=0,k;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=0;k<i;k++)
				{
					if(a[k]==a[i])
					break;
				}
			}
				if(k==i)
				{
					printf(" %d",a[i]);
					found=1;
				}
			}
		}
			if(found==0)
			{
				printf("no duplicate elements");
			}
		}


   

