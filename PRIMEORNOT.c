#include<stdio.h>
int main()
{
	int i,n,fact;
	printf("Enter any num:");
	scanf("%d",&n);
	fact=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		fact++;
	}
	if(fact==2)
	printf("Prime");
	else
	printf("Not Prime");
	return 0;
}
