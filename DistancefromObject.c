#include<stdio.h>
int main()
{
	float a,t,u,d;
	printf("Enter a value:");
	scanf("%f",&a);
	printf("Enter t value:");
	scanf("%f",&t);
	printf("Enter u value:");
	scanf("%f",&u);
	d=u*t+a*t*t/2.0;
	printf("%.2f",d);
	return 0;
}
