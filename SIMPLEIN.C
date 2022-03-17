#include<stdio.h>
void main()
{
	float p,r,t,I;
	printf("Enter the principle amount, time taken and Rate Of Interest\n");
	scanf(" %f %f %f",&p,&t,&r);
	I=(p*t*r)/100;
	printf("Simple Interest: %f",I);
	getch();
}