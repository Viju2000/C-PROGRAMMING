#include<stdio.h>
#include<conio.h>
void main()
{
int radius,base,height,breadth,length,rectangle;
float triangle,circle;
printf("Enter the value of radius");
scanf("%d",&radius);
printf("Enter the values of base and height of traingle\n");
scanf("%d %d",&base,&height);
printf("enter the values of length and breadth of rectangle\n");
scanf("%d %d",&length,&breadth);
circle=3.142*radius*radius;
triangle=0.5*length*breadth;
rectangle=length*breadth;
printf("Area of circle: %f",circle);
printf("Area of Triangle: %f",triangle);
printf("Area of Rectangle: %d",rectangle);
getch();
}
