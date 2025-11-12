#include<stdio.h>
int main()
{
	int rev,rem,n,num,temp;
	printf("Enter any number:");
	scanf("%d",&num);
	rev=0;
	temp=num;
	while(num!=0)
	{
		rem=n%10;
		rev=rev*10+n%10;
		num=num/10;
	}
	if(temp==rev)
	printf("Palindrome");
	else
	printf("Not Palindrome");
	return 0;
}
