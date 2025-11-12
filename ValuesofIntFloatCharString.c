#include<stdio.h>
int main()
{
	int num;
	float n;
	char grade;
	char name[50];
	printf("Enter a num:");
	scanf("%d",&num);
	printf("Enter n value:");
	scanf("%f",&n);
	printf("Enter grade:");
	scanf("%c",&grade);
	printf("Enter name:");
	scanf("%s",name);
	printf("%d\n %f\n %c\n %s",num,n,grade,name);
	return 0;
}
