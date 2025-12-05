#include<stdio.h>
int main()
{
	int a = 10;
	int *p = &a;
	printf("value of p :%d\n",&a);
	p=p+2;
	printf("after addition value of p : %p",p);
}
