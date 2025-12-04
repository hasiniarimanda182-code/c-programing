#include<stdio.h>
int main()
{
	int a =10;
	int *P=&a;
	int **ptr=&P;
	printf("%d\n",a);
	printf("%d\n",*P);
	printf("%d\n",**ptr);
}
