#include<stdio.h>
int main()
{
	int n,sum,rem,num;
	printf("enter any num:");
	scanf("%d",&n);
	num=n;
	sum=0;
	while(n!=0)
	{
		rem=n%10;
		sum+=rem*rem*rem;
		n=n/10;
	}
	if(sum==num)
	{
		printf("amstrong number %d is %d",num,sum);
	}
	else
	{
		printf("not a amstrong number %d is %d",num,sum);
	}
	return 0;
}
