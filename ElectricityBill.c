#include<stdio.h>
int main()
{
	float units;
	int price,amount;
	printf("Enter units:");
	scanf("%f",&units);
	if(units<=50)
	price=20;
	else if(units<=100)
	price=30;
	else if(units<=200)
	price=40;
	else
	price=50;
	amount=price*units;
	printf("Electricity bill:%d",amount);
	return 0;
}
