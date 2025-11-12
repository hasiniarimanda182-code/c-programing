#include<stdio.h>
#include<math.h>
int main()
{
	float p=5900;
	float t=2;
	float r=4;
	float ci=p*(pow(1+(r/100),t)-1);
	printf("Compound interest:%f",ci);
	return 0;
}

