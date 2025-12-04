#include<stdio.h>
int main()
{
	int a =10;
	float b =4.5;
	void *P;
	
	P=&a;
	printf("int value : %d\n",*(int*)P);
	
	P=&b;
	printf("float value : %f",*(float*)P);
	
}
