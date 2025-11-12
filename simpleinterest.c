#include<stdio.h>
int main()
{
	int p,t,r;
	float si;
	printf("Enter principle amount:");
	scanf("%d",&p);
	printf("Enter time:");
	scanf("%d",&t);
	printf("Enter rate of interest:");
	scanf("%d",&r);
	si=p*t*r/100;
	printf("%.2f",si);
	return 0;
}
