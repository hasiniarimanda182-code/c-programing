#include<stdio.h>
int main()
{
	int x,y,z,max;
	printf("Enter x,y,z values:");
	scanf("%d %d %d",&x,&y,&z);
	max=x>y?(x>z?x:z):(y>z?y:z);
	printf("Maximum number:%d",max);
	return 0;
}
