#include<stdio.h>
int main()
{
	int n,sum,rem;
	printf("enter 4 digit number:");
	scanf("%d",&n);
	sum=0;
	while(n!=0)
	{
		rem=n%10;
		sum+=rem;
		n=n/10;
	}
	printf("Sum of n is %d\n",sum);
	return 0;
}
