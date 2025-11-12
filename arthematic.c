#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the a and b values:");
	scanf("%d %d",&a,&b);
	printf("sum of %d and %d=%d\n",a,b,a+b);
	printf("difference of %d and %d=%d\n",a,b,a-b);
	printf("multiply of %d and %d=%d\n",a,b,a*b);
	printf("quotient of %d and %d=%d\n",a,b,a%b);
	printf("remainder of %d and %d=%d",a,b,a/b);
	return 0;
}
