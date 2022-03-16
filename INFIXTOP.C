#include<stdio.h>
#include<conio.h>
#define MAX 50
char s[MAX];
int top=-1;
void infixtopostfix(char *,char *);
int priority(char);
int main()
{
char infix[20],postfix[20];
s[++top]='#';
clrscr();
printf("enter the string:\n");
scanf("%s",&infix);
infixtopostfix(infix,postfix);
printf("%s\n",postfix);
getch();
return 0;
}
void infixtopostfix(char *infix,char *postfix)
{
char symbol;
int i,j=0;
for(i=0;infix[i]!= '\0';i++)
{
symbol=infix[i];
if(symbol=='(')
{
	s[++top]=symbol;
}
else if(symbol==')')
{
	while(s[top]!='(')
		postfix[j++]=s[top--];
	top--;
}
else if((priority(symbol))==10)
	postfix[j++]=symbol;
else
{
while(priority(symbol)<=priority(s[top]))
	postfix[j++]=s[top--];
s[++top]=symbol;
}
}
while(s[top]!='#')
	postfix[j++]=s[top--];
postfix[j--]='\0';
}
int priority(char a)
{
switch(a)
{
case '#':return 0;
case '(':return 1;
case '+':
case '-':return 2;
case '*':
case '/':return 3;
case '$':
case '^':return 4;
default:return 10;
}
}




