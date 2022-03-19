#include<stdio.h>
#include<conio.h>
long int fact(int n)
{
	if(n==0)
	return 1;
	return n*fact(n-1);
}
void main()
{
	int n;
	long int result;
	clrscr();
	printf("Enter a number:\n");
	scanf("%d",&n);
	result=fact(n);
	printf("%d! = %ld",n,result);
	getch();
}