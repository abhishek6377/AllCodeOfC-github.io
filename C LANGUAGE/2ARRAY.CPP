#include<stdio.h>
#include<conio.h>
void main()
{
int a=2;
int *b;
b=&a;
clrscr();
printf("The value of a is %d\n",*b);
printf("The address of is %u\n",&a);
printf("The address of is %u\n",&b);
b++;
getch();
}