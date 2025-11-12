#include<stdio.h>
int main()
{
	char op;
	double First,Second;
	printf("Enter the operator(+,_,*,/):");
	scanf("%c",&op);
	printf("Enter two operands:");
	scanf("%lf %lf",&First,&Second);
	switch(op)
	{
		case '+':
			printf("%.1lf+%1lf=%.1lf",First,Second,First+Second);
			break;
			case'-':
				printf("%.1lf-%.1lf=%.1lf",First,Second,First-Second);
				break;
				case '*':
					printf("%.1lf*%.1lf=%.1lf",First,Second,First*Second);
					break;
					case '/':
						printf("%.1lf/%1lf=%.1lf",First,Second,First/Second);
						break;
						default:
							printf("Error!operators are not correct");
						return 0;
					}
