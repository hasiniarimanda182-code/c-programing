#include<stdio.h>
int main()
{
	char grade;
	char name[10];
	char sen[50];
	printf("Enter grade:");
	scanf("%c",&grade);
	printf("Enter name:");
	scanf("%s",name);
	getchar();
	printf("Enter Sen:");
	scanf("%[^\n]",sen);
	printf("%c\n%s\n%s",grade,name,sen);
	return 0;
}
