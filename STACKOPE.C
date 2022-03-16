#include<stdio.h>
#include<conio.h>
#define MAX 5
int s[MAX];
int top=-1;
int i,item;
void push()
{
	if(top==MAX-1)
	{
		printf("Stack is Full Sry u Cant able to Add more Element in it");
	}
	else
	{
		printf("Enter The Element which u need, But use integer because i had used integer datatype to store it:");
		scanf("%d",&item);
		s[++top]=item;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("No U cant Able to Make Pop Operations Because Stack Is empty And U dont have elements to pop:");
	}
	else
	{
		printf("You Deleted %d\t element from stack",s[top--]);
	}
}
void display()
{
	if(top==-1)
	{
		printf("No U cant Able to Make Pop Operations Because Stack Is empty And U dont have elements to display\n");
	}
	else
	printf("display The Contents Available in stacks:");
	for(i=top;i>=0;i--)
	{
		printf("\n%d\n",s[i]);
	}
}

int main()
{
	int ch;
	clrscr();
	while(1)
	{
		printf("\n 1.PUSH\t 2.POP\t 3.DISPLAY\t 4.EXIT\n");
		printf("Enter the choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
				break;
			case 2:pop();
				break;
			case 3:display();
				break;
			default:printf("Sry U Entered Invalid Choice\n");
				exit(0);
		}
	}
getch();
return 0;
}

