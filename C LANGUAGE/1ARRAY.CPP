#include<stdio.h>
#include<conio.h>
void main()
{
int marks[4];
clrscr();
printf("Enter a marks\n");
scanf("%d",&marks[0]);
printf("Enter a marks\n");
scanf("%d",&marks[1]);
printf("Enter a marks\n");
scanf("%d",&marks[2]);
printf("Enter a marks\n");
scanf("%d",&marks[3]);
printf("The marks  %d, %d, %d is %d\n",marks[0]
,marks[1],marks[2],marks[3]);
getch();
}