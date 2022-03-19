#include<stdio.h>
#include<conio.h>
int getGCD(int m,int n)
{
	if(n==0)
		return m;
	else
		return getGCD(n,m%n);
}
void main()
{
	int m,n,gcd;
	clrscr();
	printf("enter 2 numbers m and n");
	scanf("%d %d",&m,&n);
	gcd=getGCD(m,n);
	printf("\n gcd of %d and %d is :%d",m,n,gcd);
	getch();
}


